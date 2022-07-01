%cau1
%a = 5, b = 6
%a
A = [1 2; 3 4];
%b
A(10,11) = 20;
A(A == 0) = 5;

%cau2
function y = de2(N)
y = 1;
for i = 2:N
    y = y*i;
end
end