#include <bits/stdc++.h>

using namespace std;
int main(){
	int N;
//	cin >> N ;
	int gan;
	int dem = 0;
	do
    {
        //Nhap vao du lieu cua N
        cin>>N;
    }while(N < 0 );
	if(N==0)
	{
		dem = 1;
	}
	  gan = N;
    while(gan != 0)//Neu biên gan con khac 0 thuc hien vong lap
    {
        if(gan%2==0)//neu gan chia het cho 2
        {
            dem = dem + 1;//bien dem tang len 1
        } 
        gan = gan / 10;//bien gan chia 10
    }
    cout << dem;



	return 0;
}

