#include <bits/stdc++.h>

using namespace std;
class SinhVien{
	private:
		int msv;
		string tsv;
		double d1,d2,d3;
		string qq;
		string gt;
	public:
		SinhVien();
		~SinhVien();
		void nhap();
		void xuat();
		string getgt();
		int getid();
		double DTB();
		string getqq();
};
string SinhVien::getqq(){
	return qq;
}
string SinhVien::getgt(){
	return this->gt;
}
int SinhVien::getid(){
	int id = (msv % 10)+1;
	return id;
}
double SinhVien::DTB(){
	return (d1 + d2 + d3)/3.0f;
}

SinhVien::SinhVien(){
	cout <<"This is Ham Dung\n";
}
SinhVien::~SinhVien(){
	cout <<"This is Ham Huy\n";
}
void SinhVien::nhap(){
	cout <<"**Input**"<<endl;
	cout << "Ma Sinh Vien: ";
	cin >> msv;cin.ignore();
	cout << "Ten Sinh Vien: ";
	getline(cin,tsv);
	cout << "Diem mon 1: "; cin >> d1; cin.ignore();
	cout << "Diem mon 2: "; cin >> d2; cin.ignore();
	cout << "Diem mon 3: "; cin >> d3; cin.ignore();
	cout << "Que Quan: ";
	getline(cin,qq);
	cout << "Gioi Tinh: ";
	getline(cin,gt);
}
void SinhVien::xuat(){
	cout<< "**Output**"<< endl;
	cout << "Ma Sinh Vien: "<<msv<<endl;
	cout << "Ten Sinh Vien: "<<tsv<< endl;
	cout << "Diem mon 1: "<< d1 << endl;
	cout << "Diem mon 2: "<< d2 << endl;
	cout << "Diem mon 3: "<< d3 << endl;
	cout << "Diem Trung Binh: "<< DTB()<<endl;
	cout << "Que Quan: "<< qq<<endl;
	cout << "Gioi Tinh: "<<gt << endl;
}
class Lop{
	private:
		int sl;
		SinhVien *sv;
	public:
		Lop();
		~Lop();
		void nhap();
		void xuat();
		void TimSvNuIdMax();
		void TimQueQuanId();
};
void Lop::TimQueQuanId(){
	int count[10] ={0};
	string quequan[10];
	for(int i = 0 ; i < sl;i++){
		int id = sv[i].getid();
		count[id-1]++;
		quequan[id-1] = sv[i].getqq();
	}
	int maxCount = 0;
	int maxID = -1;
	for(int i = 0 ; i < 10;i++){
		if(maxCount < count[i]){
			maxCount = count[i];
			maxID = i+1;
		}
	}
	if (maxID != -1) {
            cout << "Que quan co so luong sinh vien nhieu nhat (ID = " << maxID << "): " << quequan[maxID - 1] << endl;
    } else {
            cout << "Khong tim thay" << endl;
        }
}
void Lop::TimSvNuIdMax(){
	int idmax = -1;
	int  cnt = 0;
	for(int i = 0 ; i < sl;i++){
		if(sv[i].getgt()=="Nu" && idmax < sv[i].getid()){
			idmax = sv[i].getid();
			cnt = i;
		}
	}
	if(cnt != 0){
		cout << "**Sinh Vien Nu ID MAX**\n";
		sv[cnt].xuat();
	}
	else{
		cout << "Khong Tim Thay"<<endl;
	}
}
Lop::Lop(){
	cout << "This is Ham Dung\n";
}
Lop::~Lop(){
	cout << "This is Ham Huy\n";
}

void Lop::nhap(){
	cout << "Nhap So Luong Sinh Vien: ";
	cin >> sl;
	cin.ignore();
	sv = new SinhVien[sl];
	for(int i = 0 ; i < sl ;i++){
		cout << "Input Sinh Vien ["<<i+1<<"]" <<endl;
		sv[i].nhap();
		cout << endl;
	}
}
void Lop::xuat(){
	for(int i = 0 ; i < sl ;i++){
		cout << "Output Sinh Vien ["<<i+1<<"]" <<endl;
		sv[i].xuat();
		cout << endl;
	}
}

int main(){
	Lop l1;
	l1.nhap();
	cout <<"-------------------------------\n\n";
	l1.xuat();
	cout <<"-------------------------------\n\n";
	l1.TimSvNuIdMax();	
	cout <<"-------------------------------\n\n";
	l1.TimQueQuanId();

	return 0;
}

