#include <bits/stdc++.h>

using namespace std;

int main(){
//tinh ky quy Futures
	double lai; 
	cout << "Lai/lo tam tinh: ";
	cin >> lai;
	double pt;
	cout << "ROE%: ";
	cin >> pt;
	cout << pt<<endl;
	double one_pt = lai / pt;
	cout << one_pt << endl;
	double pt_want; 
	cout << "% muon nhan: ";
	cin >> pt_want;
	double kiquy = one_pt * pt_want;
	cout<<fixed<<setprecision(0);
	cout << kiquy << endl;


	return 0;
}

