#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int x,y,A,B,C,D,E ;
	cin >> x >> y ; 
	system("cls");
	A = y+3;
	B = y-2;
	C = y*5;
	D = x/y;
	E = x%y;
	cout << "Ket qua tra ve:"<<endl;
	cout << "Gtri X";
	cout << "\tGtri Y";
	cout << "\tBieu Thuc";
	cout << "\t\tKet qua\n"; 
	cout << x <<" |" << "\t"<<y<<" |"<<"\tA=y+3"<<"\t\t\t|A="<<A<<endl;
	cout << x <<" |" << "\t"<<y<<" |"<<"\tB=y-2"<<"\t\t\t|B="<<B<<endl;
	cout << x <<" |" << "\t"<<y<<" |"<<"\tC=y*5"<<"\t\t\t|C="<<C<<endl;
	cout << x <<" |" << "\t"<<y<<" |"<<"\tD=x/y"<<"\t\t\t|D="<<D<<endl;
	cout << x <<" |" << "\t"<<y<<" |"<<"\tE=x%y"<<"\t\t\t|E="<<E;


	return 0;
}

