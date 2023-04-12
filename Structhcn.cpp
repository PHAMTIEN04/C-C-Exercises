#include <bits/stdc++.h>

using namespace std;
struct hcn{
	float lenght ;
	float width ;
};

void nhaphcn(hcn &h ){
	cout << "Input Lenght :";
	cin >> h.lenght ; 
	cout << "Input Width :";
	cin >> h.width ; 
}
void xuathcn(hcn &h ){
	cout << "Output Lenght :";
	cout << h.lenght << endl ; 
	cout << "Output Width :";
	cout<< h.width << endl ; 
}
void dientichhcn(hcn &h){
	float s ;
	cout << "Dien Tich Hinh Chu :";
	s = h.lenght * h.width;
	cout << s;
}
int main(){
	hcn h1;
	nhaphcn(h1);
	xuathcn(h1);
	dientichhcn(h1);



	return 0;
}

