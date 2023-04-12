#include <bits/stdc++.h>

using namespace std;
struct hocsinh{
	string mahs;
	float diemtb;
};

void nhapmang(hocsinh a[],int &n){
	for (int i = 0 ; i < n ; i++){
		cout << "Nhap mahs hoc sinh[" <<i+1<<"] :";
		cin >> a[i].mahs ;
		cout << "Nhap diemtb hoc sinh[" <<i+1<<"] :";
		cin >> a[i].diemtb;
	}
}
void xuatmang(hocsinh a[],int n){
	for (int i = 0 ; i < n ; i++){
		cout << "mahs hoc sinh[" <<i+1<<"] :" << a[i].mahs << endl;
		cout << "diemtb hoc sinh[" <<i+1<<"] :"<< a[i].diemtb << endl;
	}
}
void sapxephocsinh(hocsinh a[], int n){
	for(int i = 0 ; i < n-1 ; i++){
		for (int j = i+1; j < n; j++){
			if (a[i].diemtb < a[j].diemtb){
				hocsinh temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}
}
void vithu(hocsinh a[],int n){
	int vitri = 1;
	for (int i = 0 ; i < n ; i++){
		cout << "mahs hoc sinh [" <<i+1<<"] :" << a[i].mahs << endl;
		cout << "diemtb hoc sinh [" <<i+1<<"] :"<< a[i].diemtb << endl;
		if (i==0||a[i].diemtb == a[i-1].diemtb){
			cout << "Xep hang thu :" << vitri << endl;
		}
		else{
		vitri++;
			cout << "Xep hang thu :"<< vitri << endl;
			
		}
	}
	cout << endl;
}
void xuatmahs(hocsinh a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout << "mahs hoc sinh[" <<i+1<<"] :" << a[i].mahs << endl;
	}
}

int main(){
	hocsinh a[100];
	int n ; 
	cout << "Nhap so luong hoc sinh : ";
	cin >> n ;
	nhapmang(a,n);
	xuatmang(a,n);
	sapxephocsinh(a,n);
	cout << "Mahs sau khi sap xep thu tu giam dan :" << endl;
	xuatmahs(a,n);
	vithu(a,n);
	return 0;
}

