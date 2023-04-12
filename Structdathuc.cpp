#include <bits/stdc++.h>
using namespace std;
struct dathuc{
	float heso;
	float mu;
};
void nhapdathuc(dathuc dt[],int &n){
	for (int i = 0 ; i < n ; i++){
		cout << "Hang tu "<<i+1<< " : " <<endl;
		cout << "He so = ";
		cin >> dt[i].heso;
		cout << "Mu = ";
		cin >> dt[i].mu;
	}
}
void xuatdathuc (dathuc dt[],int n){
	for (int i = 0 ; i < n ;i++){
		cout << "Hang Tu "<<i+1<< ": He so("<<dt[i].heso<<"), "<<"Mu("<<dt[i].mu<<")" << endl;
	}
}
void tongdathuc(dathuc tong[] ,dathuc dt1[],dathuc dt2[],int n){
	int i=0;
	int j = 0;
	int h=0;
	while(i < n && j < n){
		
		if (dt1[i].mu == dt2[j].mu){
			tong[h].heso = dt1[i].heso + dt2[j].heso;
			tong[h].mu = dt1[i].mu;
			i++;
			j++;
		}
		if (dt1[i].mu > dt2[j].mu){
			tong[h].heso = dt1[i].heso;
			tong[h].mu = dt1[i].mu;
			i++;
		}
		if (dt1[i].mu < dt2[j].mu){
			tong[h].heso = dt2[j].heso;
			tong[h].mu = dt2[j].mu;
			j++;
		}
		h++;
	}
}
int main(){
	dathuc tong[100],dt1[100],dt2[100];
	cout << "nhap so luong =" ;
	int n ; cin >> n;
	cout << "da thuc 1 : "<<endl;
	nhapdathuc(dt1,n);
	xuatdathuc(dt1,n);
	cout << "da thuc 2 : "<<endl;
	nhapdathuc(dt2,n);
	xuatdathuc(dt2,n);
	tongdathuc(tong,dt1,dt2,n);
	xuatdathuc(tong,n);

	
	return 0;
}

