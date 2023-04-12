#include <bits/stdc++.h>

using namespace std;
struct diem_x_y{
	float x;
	float y;
	
};
void nhapdiem(diem_x_y diem[], int &n){
	cin >> n ;
	for (int i = 0; i < n ; i++){
		cout << "Input x :" ;
		cin >> diem[i].x;
		cout << "Input y :" ;
		cin >> diem[i].y;
	}
}

void xuatdiem(diem_x_y diem[],int n){
	for (int i = 0 ; i < n; i++ ){
		cout << "Output X,Y :(" << diem[i].x<< "," <<diem[i].y<<")" << endl;
	}
}
int demDiemHoanhDoDuong(diem_x_y diem[],int n){
	int cnt= 0;
	for (int i = 0 ; i < n ; i++){
		if(diem[i].x > 0){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	int n ; 
	diem_x_y diem[100];
	nhapdiem(diem,n);
	xuatdiem(diem,n);
	cout <<"So Diem Co Hoanh Do Duong :" << demDiemHoanhDoDuong(diem,n) << endl;



	return 0;
}

