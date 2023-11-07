#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

class CanBo{
	private:
		string ht;
		int t;
		string gt;
		string dc;
	public:
		CanBo(string htt="",int tt=0 , string gtt="", string dcc="" ){
			this-> ht = htt;
			this-> t = tt;
			this-> gt = gtt;
			this-> dc = dcc;
		}
		void nhap(){
			cout << "Ho Ten: ";
			getline(cin,this->ht);
			cout << "Tuoi: ";
			cin >> this->t;
			cin.ignore();
			cout<< "Gioi Tinh: ";
			getline(cin,gt);
			cout << "Dia Chi: ";
			getline(cin,dc);
		}
		string getht(){
			return this->ht; 
		}
		string catten();
		void hienthi();
};
string CanBo::catten(){
	string ct="";
	string chuoi = "";
	bool check = false;
	for(int i =ht.length()-1; i >=0 ;i--){
//		cout << ht[i] ;
		
		if(ht[i] == ' '){
			break;
		}
		ct = ct + ht[i];
	}
	for(int i = ct.length()-1;i >= 0;i--){
		chuoi = chuoi + ct[i];
	}
	return chuoi;
}
void CanBo::hienthi(){
	cout << "Ho Ten: " <<ht<<endl; 
	cout << "Tuoi: " <<t<<endl; 
	cout << "Gioi Tinh: " <<gt<<endl; 
	cout << "Dia Chi: " <<dc<<endl; 
}

class QLCB{
	private:
		CanBo *a;
		int n;
	public:
		QLCB(int nn = 0){
			this->n = nn;
			a = new CanBo[n];
		}
		void themcbm(){
			system("cls");
			cout << "Them Can Bo\n";
			for(int i = 0 ; i < n ;i++){
				cout << "Can Bo ["<<i+1<<"]"<<endl; 
				a[i].nhap();
			}
			getch();
		}
		void hienthids(){
			system("cls");
			cout << "Hien Thi Danh Sach Can Bo\n";
			for(int i = 0; i < n; i++){
				cout << "Can Bo ["<<i+1<<"]"<<endl; 
				a[i].hienthi();
			}
			getch();
		}
		void timkiemtheot(string ten){
			system("cls");
			bool check = false;
			cout << "Tim kiem ten: "<<ten<<endl;
			for(int i = 0; i < n;i++){
				if(ten == a[i].catten()){
					a[i].hienthi();
					check = true;
				}
			}
			if(check == false){
				cout << "Khong tim thay!!!" << endl;
			}
			getch();
		}
		void sapxep(){
			system("cls");
			cout << "Sap Xep Tang Dan Theo Ten\n";
			for(int i = 0 ; i < n ;i++){
				for(int j = i +1 ; j < n;j++){
					if(a[i].catten()> a[j].catten()){
						CanBo tmp;
						tmp = a[i];
						a[i] = a[j];
						a[j] = tmp;
					}
				}
			}
			hienthids();
			getch();
		}
};

int main(){
	system("color 0A");
	QLCB ql(2);
	ql.themcbm();
	ql.hienthids();
	ql.timkiemtheot("Tien");
	ql.sapxep();
	
	return 0;
}
