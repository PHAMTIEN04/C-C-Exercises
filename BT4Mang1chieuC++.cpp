//Tinh trung binh cong cac so le o vi tri chan

#include <bits/stdc++.h>


using namespace std;
int main(){
	int n,a[n];//Nhap so luong phan tu 
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	for (int i = 0 ; i < n ; i++ )
	{
		cout << "Nhap gia tri phan tu a["<< i << "] : "; //Nhap gia tri phan tu 
		cin >> a[i];
		
	}
// cho Elenment = 0 de lay tim gia tri le
// cho len = 0 de dem do dai cua so le o vi tri chan
	int Element ,len;
 	Element = 0 ;
 	len = 0 ;
 	
	for ( int i = 0 ; i < n ; i++ )
	{ 
	/* Neu i chia het cho 2 ma du 0 va a[i] chia het cho 2 ma du 1
 		thi Element + a[i] va len cong them 1
 */	 
	 	if (i % 2 == 0 && a[i]%2 == 1) 
	 	{
	 		Element += a[i];
	 		len++;
	 		
	 		
		 }
	}  
	float average ;
	average = 1.0*Element/len; //tinh trung binh cong
	cout<<"Trung binh cong cac so le o vi tri chan :\n";
	cout<<"Average = " << Element << " / " << len  << endl <<"=> Average = " << average;
	return 0;
}

