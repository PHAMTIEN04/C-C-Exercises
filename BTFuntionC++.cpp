#include <bits/stdc++.h>

using namespace std;




int Cong(int a, int b)
{	
	cout << "---------------\n";
	cout << "|  PHEP CONG  |\n";
	cout << "---------------\n";
	cout << "Nhap : " ; cin >> a  >> b;
	int c;	
	c = a + b;
	cout << "Dap An : "  ;
	return c = a + b  ;

	
}
int Tru(int a1 , int b1)
{
	cout << "---------------\n";
	cout << "|  PHEP TRU   |\n";
	cout << "---------------\n";
	cout << "Nhap : "; cin >> a1 >> b1;
	int c1 ;
	cout << " Tru hai ve : " ;
	c1 = a1 - b1 ;
	return c1 = a1 - b1 ;
}
int Cong_Tru(int a2,int b2)
{
	cout << Cong(a2,b2)<<endl;
	cout << Tru(a2,b2);
	
	
}


int main(){

	int a3,b3;
	Cong_Tru(a3,b3);
	



	return 0;
}

