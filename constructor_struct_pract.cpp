#include <bits/stdc++.h>

using namespace std;

#define ll long long
struct SinhVien {
	string name, msv;
	double gpa;
	
	
	
	bool operator < (const SinhVien other){
		return gpa < other.gpa;
	}
	
	friend ostream& operator << (ostream& out, SinhVien x){
		out << x.name << ' ' << x.msv << ' '<< x.gpa; 
		return out;
	};
		
};

int main(){
	int n; cin>> n;
	SinhVien ds[n];
	for (int i = 0; i < n;i++){
		cin.ignore();
		getline(cin, ds[i].name);
		cin >> ds[i].msv;
		cin >> ds[i].gpa;
	}
	sort (ds, ds + n);
	for (int i =0; i < n; i++){
		cout << ds[i] << endl;
	}
//	3
//	lai hung manh
//	01
//	2.5
//	lai hop duc
//	02
//	2.7
//	lai quan que
//	03
//	1.6
// out put: 
//	lai quan que 03 1.6
//	lai hung manh 01 2.5
//	lai hop duc 02 2.7

	return 0;
}
