#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct SinhVien{
	string msv;
	string ten;
	double gpa;
	string addr;
	
	// constructor : ham mac dinh tuong trung cho struct khai bao phia tren
//	mỗi lần tạo mới(khai báo) struct thì sẽ gọi hàm constructor này
//	constructor 1
	SinhVien(){
		msv = "abcd";
		ten = "lai hop duc";
		gpa = 2.92;
		addr = "thai binh";
	}
//	constructor 2
	SinhVien (string ma, string name, double diem , string dc){
		msv = ma;
		ten = name; 
		gpa = diem;
		addr = dc; 
	}
	
//	nạp chồng toán tử
	void nhap(){
		cin >> msv;
		cin.ignore();
		getline(cin, ten);
		cin >> gpa;
		cin.ignore();
		getline(cin, addr);
	}
	void in(){
		cout << msv << ' ' << ten << ' '<< fixed << setprecision(2) << gpa << ' ' << addr <<endl;
	}
};

int main(){
	SinhVien x;
//	SinhVien y = x; // copy noi dung cua x sang y
//	cin >> x.msv;
//	cin.ignore();
//	getline(cin, x.ten);
//	cin >> x.gpa;
//	cin.ignore();
//	getline(cin, x.addr);
//	x = {"abcd", "lai hop duc", 2.92, "Dong vinh"};
//	x.nhap();
	x.in();
	SinhVien y;
	y.in();
	SinhVien z("B21", "duc", 3.5, "vung tau");
	z.in();
//	cout << x.msv << ' ' << x.ten << ' '<< fixed << setprecision(2) << x.gpa << ' ' << x.addr <<endl;
	
	return 0;
}
