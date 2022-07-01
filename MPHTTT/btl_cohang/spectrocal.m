function [f,Pf] = spectrocal(t,x)
Ns = length(x);
Ts = t(2)-t(1);
f = (-Ns/2:Ns/2-1)/(Ns*Ts); % Tính vector t?n s?
Pf = fft(x,Ns); % Khai tri?n Fourier
Pf = fftshift(Pf)/Ns; % D?ch thành ph?n t?n s? 0 v? trung tâm ph?
Pf = abs(Pf).^2; 