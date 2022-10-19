#include <bits/stdc++.h>

using namespace std;

#define ll long long
// nap chồng toán tử 


struct Sophuc{
	int a, b;
//	kieu_tra_ve operator (+-*/) (danh sach tham so){//////code}
//	nạp chồng toán tử: hiểu đơn giản là khiến cho các thao tác trên kiểu dữ liệu mình tự định nghĩa(kiểu struct, class) hoạt động như các biến 
//thông thường như là int, float, long long, ... khiến chúng có thể thực hiện các phép toán, thủ tục vào ra như bth 
//vs hàm struc nạp chồng toán tử operator chỉ cho phép truyền vào 1 tham số
	
//	Sophuc operator + (const Sophuc other){
//		Sophuc tong;
//		tong.a = a + other.a;
//		tong.b = b + other.b;
//		return tong;
//	}
//nếu muốn truyền 2 tham số thì ta khai báo friend ở đằng trước
	friend Sophuc operator + (const Sophuc x, const Sophuc y){
		Sophuc tong;
		tong.a = x.a + y.a;
		tong.b = x.b + y.b;
		return tong;
	}
// construct cho hàm nhập : insertion >>
	friend istream& operator >> (istream& in, Sophuc& x){ //&x bởi vì là giá trị của x sẽ thay đổi sau hàm nhập
		in >> x.a >> x.b;
		return in;
	}
// construct cho hàm in : extraction >>	
	friend ostream& operator << (ostream& out, Sophuc x){
		out << x.a << " " << x.b;
		return out;
	}
// construct cho cho kiểu == va !=
//	bool operator == (const Sophuc other){
//		return a==other.a && b==other.b;
//	}
// kiểu khác 
	friend bool operator == (const Sophuc x, const Sophuc y){
		return x.a == y.a && x.b == y.b;
	}
//	bool operator !=(const Sophuc other){
//		return a!=other.a || b != other.b;
//	}

	
};

int main(){
	Sophuc a, b;
	cin >> a >> b;
	if (a == b){
		cout << "YES";
	}
	else cout << "NO";

	return 0;
}
