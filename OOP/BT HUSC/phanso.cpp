#include <iostream>
#include <math.h>
using namespace std;
class phanso{
	private:
		int tu;
		int mau;
	public:
		phanso(){
			tu = 0;
			mau = 0;
		}
		phanso(int t , int m):tu(t),mau(m){};
		void hienthi();
		phanso cong(phanso &ps1);
		phanso tru(phanso &ps1);
		phanso nhan(phanso &ps1);
		phanso chia(phanso &ps1);
		void toigian();
};

void phanso::hienthi(){
	cout << "**Output**\n";
	cout << "Phan So= " << tu << "/" << mau << endl;
}
phanso phanso::cong(phanso &ps1){
	cout << "Cong\n";
	phanso ps2;
	if(mau == ps1.mau){
		ps2.tu = tu + ps1.tu;
		ps2.mau = mau;
	}
	else{
		ps2.tu = (tu * ps1.mau) + (ps1.tu * mau);
		ps2.mau = (mau * ps1.mau);
	}
	return ps2;
}
phanso phanso::tru(phanso &ps1){
	cout << "Tru\n";
	phanso ps2;
	if(mau == ps1.mau){
		ps2.tu = tu - ps1.tu;
		ps2.mau = mau;
	}
	else{
		ps2.tu = (tu * ps1.mau) - (ps1.tu * mau);
		ps2.mau = (mau * ps1.mau);
	}
	return ps2;
}
phanso phanso::nhan(phanso &ps1){
	cout << "Nhan\n";
	phanso ps2;
	ps2.tu = tu * ps1.tu;
	ps2.mau = mau * ps1.mau;
	return ps2;
}
phanso phanso::chia(phanso &ps1){
	cout << "Chia\n";
	phanso ps2;
	ps2.tu = tu * ps1.mau;
	ps2.mau = mau * ps1.tu;
	return ps2;
}
void phanso::toigian(){
	cout << "Phan So Toi Gian\n";
	int max = 0;
	int i = 1;
	int n = 0;
	if(tu > mau){
		n = tu;
	}
	else{
		n = mau;
	}
	while(i<=n){
		if(tu%i == 0 && mau%i==0){
			max = i;
		}
		i++;
	}
	tu = tu / max;
	mau = mau/max;
}
int main(){

	phanso ps(2,4);
	phanso ps1(3,4);
	phanso ps2 = ps.cong(ps1);
	ps2.hienthi();
	ps2.toigian();
	ps2.hienthi();
	phanso ps3 = ps.tru(ps1);
	ps3.hienthi();
	ps3.toigian();
	ps3.hienthi();
	phanso ps4 = ps.nhan(ps1);
	ps4.hienthi();
	ps4.toigian();
	ps4.hienthi();
	phanso ps5 = ps.chia(ps1);
	ps5.hienthi();
	ps5.toigian();
	ps5.hienthi();
	
	
	







	return 0;
}

