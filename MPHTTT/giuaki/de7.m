%cau1
% a = 5, b = 6, c = 7
%a
A = randi([0 10], 10, 12);
B = randi([0 10], 1, 12);
%b
C = [A; B];
%c
C(5, :) = [];
C(:, 6) = [];
%d
C(5, 6) = 0;

%cau2
function y = de7()
    N = 10;
    y = 0;
    for i = 1:N
        y = y + (-4)^5/(4*exp(-i));
    end
    sprintf('Gia tri cua y la: %0.6f', y);
end