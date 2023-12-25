#include <bits/stdc++.h>

using namespace std;

class ThiSinh{
	private:
		string sbd,ht,ns,gt;
		float dm1,dm2,dm3;
	public:
		ThiSinh(){
			this->sbd = "";
			this->ht = "";
			this->ns = "";
			this->gt = "";
			this->dm1 = 0;
			this->dm2 = 0;
			this->dm3 = 0;
		}
		ThiSinh(string sbd,string ht,string ns,string gt,float dm1,float dm2,float dm3):sbd(sbd),ht(ht),ns(ns),gt(gt),dm1(dm1),dm2(dm2),dm3(dm3){};
		
		friend istream& operator >>(istream &in,ThiSinh &ts){
			cout << "Nhap so bao danh: ";
			getline(in,ts.sbd);
			cout << "Nhap ho ten: ";
			getline(in,ts.ht);
			cout << "Nhap nam sinh: ";
			getline(in,ts.ns);
			cout << "Nhap gioi tinh: ";
			getline(in,ts.gt);
			cout << "Nhap diem mon 1: ";
			in >> ts.dm1; in.ignore();
			cout << "Nhap diem mon 2: ";
			in >> ts.dm2; in.ignore();
			cout << "Nhap diem mon 3: ";
			in >> ts.dm3; in.ignore();
			return in;
		}
		
		friend ostream& operator <<(ostream &out,ThiSinh &ts){
			out << "So bao danh: "<< ts.sbd << endl;
			out << "Ho ten: "<< ts.ht << endl;
			out << "Nam sinh: "<< ts.ns << endl;
			out << "Gioi tinh: "<< ts.gt << endl;
			out << "Diem mon 1: "<< ts.dm1 << endl;
			out << "Diem mon 2: "<< ts.dm2 << endl;
			out << "Diem mon 3: "<< ts.dm3 <<endl;
			return out;
		}
		
};




int main(){
	ThiSinh *ts;
	int n; 
	cout << "Nhap so luong Thi Sinh: ";cin >> n; cin.ignore();
	ts = new ThiSinh[n];
	cout << "**Input Thong Tin Thi Sinh**\n";
	for(int i = 0 ; i < n ;i++){
		cout << "Thi Sinh ["<< i+1<<"]:\n";
		cin >> ts[i];
	}
	cout << endl;
	cout << "**Output Thong Tin Thi Sinh\n**";
	for(int i = 0; i < n;i++){
		cout << "Thi Sinh ["<< i+1<<"]:\n";
		cout << ts[i];
	}
	



	return 0;
}

