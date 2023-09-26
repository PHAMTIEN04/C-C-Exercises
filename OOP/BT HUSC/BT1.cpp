#include <bits/stdc++.h>

using namespace std;
class Conmeo{
	private:
		string ten;
		string mau_long;
		string giong;
	public:
//		Conmeo(string t,string ml,string g):ten(t),mau_long(ml),giong(g){};
		Conmeo(string t,string ml,string g){
			ten = t;
			mau_long = ml;
			giong = g;
		}
		void hienthi();
		void keu(){
			cout << "Keu: Meo Meo"<<endl;
		}
		void anuong(){
			cout << "An uong: Ca" << endl;
		}
};

void Conmeo::hienthi(){
	cout << "Ten: "<< ten << endl;
	cout << "Mau Long: "<< mau_long << endl;
	cout << "Giong: "<< giong << endl;
}

int main(){
	Conmeo katy("Katy","Vang","Cai");
	katy.hienthi();
	katy.keu();
	katy.anuong();


	return 0;
}

