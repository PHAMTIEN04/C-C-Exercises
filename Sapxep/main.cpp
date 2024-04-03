#include <bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	cout << "Nhap mang: ";
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
}
void hienthi(int a[],int n){
	cout << "Hien thi: ";
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void sapxepchon(int a[],int n){
	cout << "Sau khi sap xep chon"<<endl;
	for(int i = 0 ; i < n-1;i++){
		int min = i;
		for(int j = i+1; j < n ; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		swap(a[i],a[min]);
		hienthi(a,n);
	}
}
void sapxepchen(int a[],int n){
	cout << "Sau khi sap xep chen"<<endl;
	for(int i = 1; i <= n-1;i++){
		int j = i;
		while(j >= 1 && a[j] < a[j-1]){
			swap(a[j],a[j-1]);
			j--;
		}
		hienthi(a,n);
	}
}
void sapxepnoibot(int a[],int n){
	cout << "Sau khi sap xep noi bot"<< endl;
	bool check = false;
	for(int i = 0 ; i < n - 1;i++){
		if(check == false){
		
		for(int j = n - 1 ; j >= i + 1;j--){
			if(a[j] < a[j-1]){
				swap(a[j],a[j-1]);
				check = true;
			}
		}
		if(check == false){
			break;
		}
		else{
			check = false;
		}
		}
		hienthi(a,n);
	}
}
int main(){
	int n; cout << "Nhap so luong mang: "; cin >> n;
	int a[n];
	nhap(a,n);
	hienthi(a,n);
//	sapxepchon(a,n);
//	hienthi(a,n);
//	sapxepchen(a,n);
//	hienthi(a,n);
	sapxepnoibot(a,n);
	hienthi(a,n);
	return 0;
}

