#include <bits/stdc++.h>

using namespace std;
class Diem{
	private:
		int x,y;
	public:
		Diem(){
			this->x = 0;
			this->y = 0;
		}
		Diem(int xx, int yy):x(xx),y(yy){};
		
		int getx(){
			return this->x;
		}
		int gety(){
			return this->y;
		}
		int setx(int x){
			this->x = x;
		}
		int sety(int y){
			this->y = y;
		}
		
		friend istream &operator>>(istream &in,Diem &a){
			cout << "Nhap X:";
			in>>a.x;
			cout << "Nhap Y:";
			in>>a.y;
			return in;
		}
		friend ostream &operator<<(ostream &out,Diem &a){
			out<<"X = "<<a.x<<endl<<"Y = "<<a.y;
			return out;
		}
};
class QL{
	private:
		Diem *a;
		int n;
	public:
		QL(int n = 0){
			this->n = n;
			if(this->n == 0){
				cin >> this->n;
			}
			a = new Diem[this->n];
		}
		void nhap(){
			for (int i = 0 ;i < this->n ;i++){
				cin >> a[i];
			}
		}
		void xuat(){
			for (int i = 0 ;i < this->n ;i++){
				cout << a[i]<<endl;
			}
		}
		~QL(){
			delete[] a;
		}
};
int main(){
	QL a(3);
	a.nhap();
	a.xuat();
	


	return 0;
}
//Toan tu tai boi >> << : Su dung phuong thuc friend

