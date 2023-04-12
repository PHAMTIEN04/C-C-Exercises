#include <bits/stdc++.h>

using namespace std;
int hang,cot;
void nhapmt()
{
	
	
}
int main(){
	cin >> hang>> cot ; 
//	nhapmt();
	int a[100][100];
	for(int i = 0 ; i < hang ; i++){
		for(int j = 0 ; j < cot ; j++)
		{
			cout << "Nhap mang vao phan tu a["<<i+1<<"]["<<j+1<<"]: ";
			cin >>a[i][j];
		}
	}
	cout << a[1][0];
}

