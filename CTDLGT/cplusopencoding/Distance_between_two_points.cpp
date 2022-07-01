#include<iostream>
#include<fstream>
#include<math.h>
#include<iomanip>
using namespace std;
class Diem // khai báo các số use class
{
    private:
    double so1; // cho số 1 dạng số thực
    double so2; // cho số 2 dạng số thực
    public:
    Diem() // default constructor
    {
        so1 = 0; // cho số ban đầu = 0
        so2 = 0; // cho số ban đầu = 0
    }
    Diem(double so1, double so2); // another constructor
    Diem(const Diem &b); // copy constructor
    double getX() const; // get X value
    double getY() const; // get Y value
    double KhoangCach(const Diem &b); // get the distance with another point
};
Diem::Diem(double _so1, double _so2) 
{
    so1 = _so1; // thiết lập giá trị cho số 1
    so2 = _so2; // thiết lập giá trị cho số 2
}
Diem::Diem(const Diem &b) // copy constructor
{
    so1 = b.so1; 
    so1 = b.so2;
}
double Diem::getX() const // get X value
{
    return so1;
}
double Diem::getY() const // get X value
{
    return so2;
}
double Diem::KhoangCach(const Diem &b) // tính distance
{
    double a;
    double d;
    double c;
    d = (so1 - b.so1) * (so1 - b.so1);
    c = (so2 - b.so2) * (so2 - b.so2);
    a = sqrt(d + c); // biểu thức tính distance
    return a;
}
int main()
{
    float KhoangCach; // cho distance
    short dem = 0, tong; 
    ifstream fileinput("points.inp"); // mở file points.inp
    ofstream fileoutput("points.out"); // mở file points.out
    fileinput >> tong;
    float mang[tong][2];
    while(! fileinput.eof()) // if chưa đọc đến kí tự final of file 
    {
        fileinput >> mang[dem][0] >> mang[dem][1]; // đọc từ trái qua phải
        ++ dem;
    }
    fileinput.close(); // đóng file input
    for(dem = 0; dem < tong; ++ dem) // loop tăng dần từ 0 đến tổng các điểm
    {
        Diem *b1 = new Diem(mang[dem][0], mang[dem][1]);
        for(short dem1 = 0; dem1 < tong; ++ dem1) // loop tăng dần từ 0 đến tổng các điểm 
        {
            Diem b2(mang[dem1][0], mang[dem1][1]);
            KhoangCach = b1 -> KhoangCach(b2);
            fileoutput << fixed << setprecision(2) << KhoangCach; // ghi ra kết quả cách nhau 2 chữ số sau dấu phẩy
            if(dem1 != tong - 1) // if vị trí tìm khác sum các vị trí - 1
            {
                fileoutput << " "; 
        	}
        }
        fileoutput << "\n"; // ghi cách 1 dòng
    }
    fileoutput.close(); // đóng file output
}