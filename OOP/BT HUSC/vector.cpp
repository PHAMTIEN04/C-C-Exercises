#include <bits/stdc++.h>

using namespace std;
class VECTO{
	private:
		int n;
		int *v;
	public:
		VECTO(int n = 0){
			this->n = n;
			if(this->n == 0){
				cout << "Nhap kich thuoc vecto: ";
				cin >> this->n; cin.ignore();
			}
			v = new int[this->n];
			for(int i = 0 ; i < this->n;i++){
				cin >> v[i];
			}
		}
		~VECTO(){
			delete []v;
		}
		void hienthi(){
			for(int i = 0;i<this->n;i++){
				cout << v[i] << " ";
			}
		}
};
int main(){
	VECTO v(3);
	v.hienthi();


	return 0;
}

