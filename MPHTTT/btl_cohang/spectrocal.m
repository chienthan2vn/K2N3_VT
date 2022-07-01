function [f,Pf] = spectrocal(t,x)
Ns = length(x);
Ts = t(2)-t(1);
f = (-Ns/2:Ns/2-1)/(Ns*Ts); % T�nh vector t?n s?
Pf = fft(x,Ns); % Khai tri?n Fourier
Pf = fftshift(Pf)/Ns; % D?ch th�nh ph?n t?n s? 0 v? trung t�m ph?
Pf = abs(Pf).^2; 