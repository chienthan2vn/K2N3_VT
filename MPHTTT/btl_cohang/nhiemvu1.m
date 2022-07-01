%nhiemvu1
function [kt, b] = nhiemvu1()
%Buoc 1
img = '2022PicVietnam.jpg';
y = imread(img);                    %Doc anh
%Buoc 2
%y = rgb2gray(x);                    %Convert to Gray
kt = size(y);                       %Kich thuoc anh
%buoc 3
y = de2bi(y);                       %Chuyen doi nhi phan
b = reshape(y, 1, []);              %Chuoi nhi phan sau khi reshape
%buoc 4
y = reshape(b, kt(1)*kt(2)*kt(3), 8);       %Reshape ve ma tran 8 bit
y = bi2de(y);                               %Chuyen ve thap phan
y = reshape(y, kt(1), kt(2), kt(3));        %Reshape ve kich thuoc hinh anh
imwrite(y, 'rs.jpg');                       %Luu anh
imfinfo('rs.jpg')
end

