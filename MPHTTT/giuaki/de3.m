%cau1
%a = 5, b = 6
%a
A = eye(7);
B(7,7) = 6;
B(B == 0) = 6;
%b
C = [A, B];
%c
size = size(C);
%d
C(5, 7) = 4;

%cau2
function y = de3()
    N = 26;
    y = 1;
    for i = 1:N
        y = y*(sqrt((2*5*i+5)/2)+i^2);
    end
    sprintf('y = %0.6f', y);
end