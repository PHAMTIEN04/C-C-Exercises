#include <iostream>
#include <math.h>

using namespace std;
struct diem{
	int x,y;
};
void nhapdiem(diem diem_x_y[], int &n){
		cin >>n;
		for (int i =0 ; i < n ; i++){
		cout << "nhap hoanh do x:";
		cin >> diem_x_y[i].x;
		cout << "nhap tung do y:";
		cin >> diem_x_y[i].y;
	}
}
void xuatdiem(diem diem_x_y[],int n){
	for (int i = 0 ; i < n ; i++){
		cout << "Diem" << i + 1<<"=("<<diem_x_y[i].x<<"," <<diem_x_y[i].y<<")"<<endl;
	}
}
int checkhdduong(diem diem_x_y[], int n){
	int cnt = 0;
	for (int i = 0 ; i< n ; i++){
		if (diem_x_y[i].x > 0){
			cnt++;
		}
	}
	return cnt;
}
int checkdiemkhacnhau(diem diem_x_y[],int n){
	int cnt = 0;
//	bool check = true;
	for (int i = 0 ; i <n -1 ; i++){
		for (int j = i +1 ; j < n; j++){
			if(diem_x_y[i].x == diem_x_y[j].x && diem_x_y[i].y == diem_x_y[j].y ){
				break;
			}
			else{
				cnt++;
			}
		}
	}
	return cnt;
}
void checkminmax(diem diem_x_y[], int n ){
	int min = diem_x_y[0].x;
	for (int i = 1 ;i < n ; i++){
		if (min > diem_x_y[i].x){
			min = diem_x_y[i].x;
		}
	}
	cout << "Min x :" << min << endl;
	int max = diem_x_y[0].x;
	for (int i = 1 ;i < n ; i++){
		if (max < diem_x_y[i].x){
			max = diem_x_y[i].x;
		}
	}
	cout << "Max x :" << max << endl;
}
float khoangcach(diem d){
	return sqrt(d.x*d.x + d.y*d.y);
}
int Mintoado(diem diem_x_y[], int n){
	int min = 0 ;
	
	for (int i = 1 ; i < n ; i++){
		
		if(khoangcach(diem_x_y[min]) > khoangcach(diem_x_y[i]))
		{
			min= i;
		}
		 
	}
	return min;
}
void sapxepgiamdan(diem diem_x_y[],int n){
	for (int i = 0 ; i < n-1 ;i++){
		for (int j = i +1 ; j < n ;j++){
			if (khoangcach(diem_x_y[i]) < khoangcach(diem_x_y[j])){
				diem temp = diem_x_y[i];
				diem_x_y[i] = diem_x_y[j];
				diem_x_y[j] = temp;
			}
		}
	}
	
}
int main(){
	diem diem_x_y[100];
	int n ; 
	nhapdiem(diem_x_y,n);
	xuatdiem(diem_x_y,n);
	int demsohdduong = checkhdduong(diem_x_y,n);
	cout << "So Hoanh Do Duong : " <<demsohdduong << endl;
	int demsodiemkhacnhau = checkdiemkhacnhau(diem_x_y,n);
	cout << "So Diem Khac Nhau : " << demsodiemkhacnhau << endl;
	checkminmax(diem_x_y,n);
	cout << "Min Toa Do :"<<Mintoado(diem_x_y,n)<<endl;
	sapxepgiamdan(diem_x_y,n);
	xuatdiem(diem_x_y,n);
	
	
	return 0;
}
