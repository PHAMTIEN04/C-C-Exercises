#include <bits/stdc++.h>

using namespace std;
void CheckSoNguyenTo(int n){
	int cnt = 0 ;
	if (n < 2)
	{
		cout <<n<<"Khong phai la so nguyen to";
	}
	else{
		for(int i= 2;i <= sqrt(n);i++){
		if(n % i == 0){
			cnt++;
		}
		
	}
		 if(cnt == 0){
        cout <<n<<" la so nguyen to";
    }else{
        cout<<n<<" khong phai so nguyen to";
    }
	}

} 
int main(){
	
	int n ;
	cin >> n ;
	CheckSoNguyenTo(n);

	return 0;
}

