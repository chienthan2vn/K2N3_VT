%cau1
%a = 5, b = 6, c = 7
%a
A = randi([0 1], 6, 7)
%b
B = [A];
%c
C = mean(B);
%d
D = sort(C);

%cau2
syms x;
y(x) = 5*x^2 - 12*x + 7;
x1 = solve(y, x);
z(x) = diff(y, x);
x2 = solve(z, x);
hold on;
title('Do thi ham so');
xlabel('x'); ylabel('y');
fplot(y, [-4 4]);
plot(0, y(0), 'or', x1, 0, 'or', x2, 0, 'or');
legend('do thi fx');
