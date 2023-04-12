#include <bits/stdc++.h>

using namespace std;
int reverse(int n){
	int  reversed_number = 0, remainder;
	while(n != 0) {
	//Thuat toan gan gia tri so dao nguoc
		remainder = n % 10;
		reversed_number = reversed_number * 10 + remainder;
		n /= 10;
	}
 
  return reversed_number;
}
int main(){
	int n ; cin >> n;
	int check;
	check = reverse(n);
	int odd;
    bool ok = false;
	
	while(check != 0 ){
		odd = check% 10;
		if(odd % 2 == 1){
			cout << "So le la :"<<odd<<endl;;
			ok = true;
		}

		
		check = check/10;
	}
	if(!ok){
	    cout <<"So da nhap khong co so le";
	}
	return 0;
}

