%Cau1:
%a = 5, b = 6, c = 7
%a
A = randi([0, 10], 10, 12);
%b
B = A(5,:);
%c
C = A(:,6);
%d
z = A(5,6);
%e
max(max(A));

%Cau2_euler
function y1 = de1()
    f = @(x, y) 21*x^2 - 58*y;
    h = 0.007;
    t = (0:h:64);
    y1(1) = 2;
    for k = 2:length(t)
        y1(k) = y1(k-1)+f(t(k-1),y1(k-1))*h;
    end
end

%cau2_euler bien doi
function y1 = de1()
    f = @(x, y) 21*x^2 - 58*y;
    h = 0.007;
    t = (0:h:64);
    y1(1) = 2;
    for k = 2:length(t)
        yx = y1(k-1)+f(t(k-1),y1(k-1))*h;
        y1(k) = y1(k-1)+h*(f(t(k-1),y1(k-1))+f(t(k-1),yx))/2;
    end
end