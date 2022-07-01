%cau1
%a = 5, b = 6, c = 7;
%a
A = [4; 5; 6];
B = [10; 5; 2];
%b
X = [10 6 -7; 7 12 -5; 5 7 -21];
X = inv(X);
Y = [10 5 2];
z = X*Y';

%cau2
function k = de4()
    N = 10;
    y(1) = 1;
    y(2) = 1;
    for i = 3:N
        y(i) = y(i-1) + y(i-2);
    end
    k = y(N)
end