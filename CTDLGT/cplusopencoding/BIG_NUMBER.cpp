#include<iostream>
#include<fstream>
using namespace std;
class SoLon // khai báo lớp 
{
	private:
	string chuoi1, chuoi2;
	public:
	string Cong(string chuoi1, string chuoi2);
	string Nhan(string chuoi1, string chuoi2);
};
string SoLon :: Cong(string chuoi1, string chuoi2) // cho 2 chuỗi là chuỗi 1 và chuỗi 2
{
	string KetQua = ""; // cho kết quả ban đầu = rỗng
	short Nho = 0; // cho biến nhớ ban đầu = 0
	while(chuoi1.size() < chuoi2.size()) // khi độ dài chuỗi 1 < độ dài chuỗi 2
	{
		chuoi1 = "0" + chuoi1; // thêm các số 0 vào trước chuỗi 1
	}
	while(chuoi1.size() > chuoi2.size()) // khi độ dài chuỗi 1 > độ dài chuỗi 2
	{
		chuoi2 = "0" + chuoi2; // thêm các số 0 vào trước chuỗi 2
	}
	short a, DoDai = chuoi1.length() - 1; // khi độ dài chuỗi 1 = độ dài chuỗi 2 do đếm từ cuối nên phải - 1
	for(a = DoDai; a >= 0; -- a) // loop giảm dần
	{
		short So = int(chuoi1[a] - '0') + int (chuoi2[a] - '0') + Nho;
		// biểu thức sum 2 chuỗi, do chuyển về số nên phải trừ đi kí tự '0'
		KetQua = char(So % 10 + '0') + KetQua; 
		// lấy phần dư, do cho phần dư vào chuỗi nên phải biến về kiểu char và cộng thêm vs kí tự '0'
		Nho = So / 10; // biểu thức tính số nhớ
	}
	if(Nho > 0) // if số nhớ > 0
	{
		KetQua = char(Nho + '0') + KetQua; // cộng thêm nhớ vào kết quả
	}
	return KetQua;
}
string SoLon :: Nhan(string chuoi1, string chuoi2) // cho 2 chuỗi là chuỗi 1 và chuỗi 2
{
    string KetQua = ""; // cho kết quả ban đầu = rỗng
    short d, so = 0, DoDai1 = chuoi1.length(), DoDai2 = chuoi2.length(), DoDai = DoDai1 + DoDai2 - 1; // cho số ban đầu = 0, độ dài chuỗi 1 và chuỗi 2, độ dài chuỗi
    for(d = DoDai; d >= 0; -- d) // loop giảm dần
    {
        short e;
        int TamThoi = 0;
        for(e = DoDai1 - 1; e >= 0; -- e)
        // loop giảm dần
            if(d - e <= DoDai2 && d - e >= 1)
            {
                short chuoi11 = chuoi1[e] - '0', chuoi22 = chuoi2[d - e - 1] - '0';
                TamThoi += chuoi11 * chuoi22;
            }
        TamThoi += so;
        so = TamThoi / 10; // bỏ chữ số cuối
        KetQua = (char)(TamThoi % 10 + '0') + KetQua; // biểu thức tính chuỗi
    }
    while(KetQua.size() > 1 && KetQua[0] == '0') // khi độ dài chuỗi > 1 và kí tự số 0 in chuỗi = 48
    {
        KetQua.erase(0, 1); // xoá 1 phần tử bắt đầu từ vị trí thứ 0
    }
    return KetQua;
}
int main()
{
	short test;
    ifstream fileinput("bignumber.in"); // mở file input
    ofstream fileoutput("bignumber.out"); // mở file output
	fileinput >> test;
	while(test --) // run test case
	{
		string chuoi1, chuoi2;
		char KiTu;
		SoLon object;
		while(! fileinput.eof()) // if chưa đọc đến kí tự final of file 
		{	
			fileinput.get(KiTu);
			fileinput >> chuoi1 >> KiTu >> chuoi2;
			if(KiTu == '*') // if toán tử là phép nhân 
			{
				fileoutput << object.Nhan(chuoi1, chuoi2) << "\n";
			}
        	else if(KiTu == '+') // if toán tử là phép cộng
			{ 
				fileoutput << object.Cong(chuoi1, chuoi2) << "\n";
			}
		}
	}
	fileinput.close(); // đóng file input
	fileoutput.close(); // đóng file output
}