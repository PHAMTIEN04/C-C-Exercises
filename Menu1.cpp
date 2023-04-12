#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>

using namespace std;
void Thoat(){
	exit (0);
}
void Thong_Tin_Tivi(){
	for (int i = 1 ; i <= 20 ;i++){
		if (i== 1 || i == 20){
			cout <<"+";
		}
		else{
			cout <<"-";
			if(i== 10){
				cout<<" Thong Tin Ti Vi Cua Hang ";
			}
		}
	}
	cout << endl;
	cout << "Moi nhap so luong Ti Vi :"; 
	int n ; cin >> n ;	
	int a[n];
	for (int i = 0 ; i < n ; i++){
		cout << "Nhap kich co cho Ti Vi "<<i+1<<" :";
		cin >> a[i];
		}	
	getch();
		system("cls");
		for (int i = 1 ; i <= 20 ;i++){
		if (i== 1 || i == 20){
			cout <<"+";
		}
		else{
			cout <<"-";
			if(i== 10){
				cout<<" Xuat Thong Tin Ti Vi ";
			}
		}
	}
	cout << endl;
	cout << "So luong Ti Vi la :"<<n<<endl;
	int sum=0;
	for (int i = 0 ; i < n ; i++){
		sum += a[i];
	}
	int tb = 0;
	tb = sum/n;
	cout <<"Kich co trung binh Tivi :" << tb<<endl;
	int max = a[0];
	int location = 0 ;
	for (int i = 1 ; i < n ; i++){
		if(max < a[i]){
			max = a[i];
			location = i+1;
		}
	}
	cout << "Vi tri Ti Vi co kich co lon nhat la :";
	cout << location<<endl;
			getch();
		system("cls");
	}	
void sum(){
	cout <<"Nhap :"; 
	int n ; cin >> n;
	int sum= 0;
	for (int i =1 ; i <= n; i++ ){
		sum += i;
	}
	cout << "Tong :"<<sum<<endl;
	cout << "So vua nhap la :";
	if(n % 2 == 0 ){
		cout << "So chan\n";
	}
	else{
		cout << "So le\n";
		
	}
		getch();
		system("cls");
}
void Thong_tin(){
	string ht;
	cout << "Nhap Ho Ten :"; cin.ignore(); getline(cin,ht);
	string MSV;
	cout << "Nhap Ma So SV :";cin.ignore(); getline(cin,MSV);
	int Diem ;
	cout << "Nhap Diem :";cin >> Diem;
		getch();
		system("cls");
	cout <<"Ho Ten :"<<ht<< endl;
	cout <<"Ma So SV :"<<MSV<<endl;
	cout <<"Diem :"<<Diem<<endl;
		getch();
		system("cls");
	
	
}
void Menu(){
check :
	for (int i = 1 ; i <= 30 ;i++){
		if (i== 1 || i == 30){
			cout <<"+";
		}
		else{
			cout <<"-";
			if(i== 15){
				cout<<"Menu";
			}
		}
	}
	cout <<endl;
	
	cout << "\t1. Thong tin ca nhan\n";
	cout << "\t2. Tinh tong tu 1 den N\n";
	cout << "\t3. Thong tin Tivi\n";
	cout << "\t0. Thoat\n";

	for (int i = 1 ; i <= 34;i++){
		if (i== 1 || i == 34){
			cout <<"+";
		}
		else{
			cout <<"-";

		}
	}
	cout << endl;
	
	
	cout << "Moi chon :";
	int choose ; cin >> choose ;

	
	
	switch(choose){
		case 1 : 
		Thong_tin();
		break;
		case 2 :
		sum();
		break ;
		case 3 :
		Thong_Tin_Tivi();
		break;
		case 0 :
		Thoat();
		break;
		default :
		cout <<"Nhap sai!!! Vui long thuc hien lai....\n";
		getch();
		system("cls");
		
	}
	
		if(choose == 0 ){
	exit(0);
}
	goto check;
	
}
int main(){
		Menu();	
//Thong_Tin_Tivi();
//	 Thoat();
	

	
//	Thong_tin();

	
	return 0;
}

