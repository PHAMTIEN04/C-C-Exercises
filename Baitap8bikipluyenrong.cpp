#include <bits/stdc++.h>
#include <windows.h>


using namespace std;
int main(){
   char string[100];
	cout << "Bien Doi Chu Thuong -> Hoa : " ; cin >> string ;
	strupr(string);
	cout << "Hoan Thanh => "<< string<<endl ;
	Sleep(1000);
	system("cls");
	
	cout << "Bien Doi Chu Hoa -> Thuong : " ; cin >> string ;
	strlwr(string);
	cout << "Hoan Thanh =>" << string ;
	return 0;
}

