%Cau1
%a = 5, b = 6, c = 7;
%a
A = (-3:1:14);
reshape(A, 3, 6);
%b
maxx = max(max(A));
minn = min(min(A));
%c
B = A(A > 5);
%d
C = A(A <= 6);

%cau2
function y = de6(x, z)
    thang = [31 28 31 30 31 30 31 31 30 31 30 31];
    if rem(z, 4) == 0
        thang(2) = 29;
    else
        thang(2) = 28;
    end
    y = thang(x)
end