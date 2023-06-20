#include "person.h"
#include "student.h"
#include "teacher.h"

#define maxn 100
int main(){
	Person *a[maxn];
	int cnt = 0;
	do{
		string hoten;
		getline(cin,hoten);
		char c;
		cout << "Giang Vien(G), Sinh Vien(S): "; cin >> c ; cin.ignore();
		if(c == 'G' || c == 'g'){
			int ssob;
			cout << "Nhap So Bai Bao: "; cin >> ssob; cin.ignore();
			a[cnt++] = new Teacher(hoten,ssob);
		}
		else{
			double DTB;
			cout << "Nhap Diem Trung Binh "; cin >> DTB; cin.ignore();
			a[cnt++] = new Student(hoten,DTB);
		}
		char choice;
		cout << "Tiep(Y), Dung(N): "; cin >> choice; cin.ignore();
		if(choice == 'N' || choice == 'n' || cnt >= maxn) break;
		
	}while(true);

	for(int i = 0;i< cnt ;i++){
		a[i]->xuat();
		if(a[i]->DuocKhenThuong()){
			cout << "Duoc Khen Thuong"<<endl;
		}
	}
	
	
	return 0;
}
