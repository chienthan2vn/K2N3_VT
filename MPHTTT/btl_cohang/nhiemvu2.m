%Nhiemvu2
%MSV: B19DCVT399 => M = 64; N = 9
%Lay chuoi bit tu nhiemvu1
[kt, b] = nhiemvu1();  

%Khai bao tham so
M = 64;                         %Bac dieu che
N = 9;                          
Rb = N*1e6;                     %Toc do bit
SNR_dB = [5 8 12];              %SNR theo dB
SNR = 10.^(SNR_dB/10);          %SNR
nb = log2(M);                   %So bit bieu dien 1 ki hieu
n_syms = length(b)/nb;          %Do dai chuoi ki hieu
Tb = 1/Rb;                      %Chu ki bit
Ts = nb*Tb;                     %Chu ki ki hieu

%Dieu che 64QAM chuyen doi chuoi nhi phan b sang chuoi ky tu d.
%Thuc hien tao dang xung p cho moi ki hieu, lay mau 100 lan.
%Tao tin hieu phat s
d = qammod(b', M, 'InputType', 'bit');      %Dieu che QAM phuc cho cac ki hieu
n_sample = 100;                             %So mau cho 1 tin hieu
Es = 1;                                     %Nang luong moi ki hieu
pha = 0;                                    %Pha ban dau
t = 0:Ts/n_sample:n_syms*Ts-Ts/100;         %Thoi gian cho moi ki hieu
p_m = sqrt(2*Es/Ts)*(1-cos(2*pi*t/Ts));     %Tao xung p(t)
d = kron(d', ones(1, n_sample));            %Lap lai moi ki hieu 100 lan
s = d.*p_m.*exp(i*pha);                     %Xung tin hieu s(t)

%Dua chuoi s len kenh AWGN theo SNR.
%Sau khi thu tin hieu, lay cac gia tri max cua tin hieu thu chia cho bien
%do xung ki hieu de thu duoc duoc chuoi ki hieu dr.
for i = 1:length(SNR)
    nMC = 10;           %So vong lap cho Monte Carlo loop
    err = 0;            %So loi bit
    BER = 0;
    for j = 1:nMC
        sr = awgn(s, SNR(i), 'measured', 'linear');     %Dua qua kenh awgn
        
        dra = max(reshape(sr, n_sample, n_syms));       %Lay gia tri max cua tin hieu thu
        drb = max(p_m);                                 %Lay gia tri max cua xung ki hieu
        dr = (dra/drb);                                 %tin hieu/ bien do xung
            
        bits_output = qamdemod(dr', M, 'OutputType', 'bit');    %Giai dieu che 64-QAM
        err = err + length(b(b'~= bits_output));                %Tinh so luong bit loi
    end
    BER = err/(nMC*length(b));  

    %Ve do thi tai SNR = 8
    if SNR_dB(i) == 8
        %Ve bieu do chom sao
        scatterplot(d); title('Bieu do chom sao dau ra bo dieu che SNR = 8dB'); grid;
        scatterplot(dr); title('Bieu do chom sao tai bo thu SNR = 8dB'); grid;

        %Ve xung tin hieu
        figure, plot(t, real(sr)); hold on;
        plot(t, real(s), 'LineWidth', 1.5); hold off;
        title('Xung tin hieu truoc va sau khi qua kenh AWGN (SNR = 8dB)');
        legend('Tin hieu sau khi qua kenh AWGN sr(t)', 'Tin hieu ban dau la s(t)');
        axis([0 0.000001 -inf inf]);

        %Ve mau mat
        eyediagram(s(1:1000), 2*nb);  %Bieu do mat phat
        eyediagram(sr(1:1000), 2*nb); %Bieu do mat thu

        %Ve pho tin hieu
        [f, Xf] = spectrocal(t, s);
        figure, semilogy(f, Xf); grid; title('Pho tin hieu phia phat (SNR = 8dB)');
        xlabel('t'); ylabel('PSD');
        [f, Xf] = spectrocal(t, sr);
        figure, semilogy(f, Xf); grid; title('Pho tin hieu phia thu (SNR = 8dB)');
        xlabel('t'); ylabel('PSD');
    end


    %Ket qua tinh BER cho tung truong hop
    fprintf('Tai SNR = %d, co BER = %f \n', SNR_dB(i), BER);


    %Tep do hoa o cac muc SNR
    bits_output = reshape(bits_output, [], 8);
    bits_output = uint8(reshape(bi2de(bits_output), kt(1), kt(2), kt(3)));
    imwrite(bits_output, "snr_" + num2str(SNR_dB(i)) + ".jpg");
end
    