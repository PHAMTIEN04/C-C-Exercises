#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct ttsv
{
	string masv;
	string tensv;
	string ntns;
	string phai;
	float dtoan,dly,dhoa;
	void display() {
    cout << "Masv: " << masv << endl;
    cout << "Tensv: " << tensv <<endl;
    cout << "NTNS: " << ntns <<endl;
    cout << "Phai: " << phai << endl;
    cout << "Diem Toan: " << dtoan <<endl;
    cout << "Diem Ly: " << dly <<endl;
    cout << "Diem Hoa: " << dhoa <<endl;

    
  }
	
}sv1 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
,sv2 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
,sv3 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
,sv4 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
,sv5 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
,sv6 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
,sv7 = { "22T123123","Le Van A","12-1-1999","Khong",5.6,1, 2}
;
int main(){
	system("color 0A");
	tt :
	cout << "Danh Sach Sinh Vien :" ;
	int choose; 
	cin >> choose;
	switch (choose){
		case 1 :
		sv1.display();
		break;
		case 2 :
		sv2.display();
		break;
		case 3 :
		sv3.display();
		break;
		case 4 :
		sv4.display();
		break;
		case 5 :
		sv5.display();
		break;
		case 6 :
		sv6.display();
		break;
		case 7 :
		sv7.display();
		break;
		
	}
	if (choose == 0){
		cout << "The End.................";
		return 0 ;
	}
	getch();
	system("cls");
	
	goto tt;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


//Khai bao kieu cau truc (struct)

//	Cú pháp
//	struct <ten kieu cau truc>
//	{
//		<kieu du lieu> <ten thanh phan 1>;
//		...
//		<kieu du lieu> <ten thanh phan n>;
//	};
//
//	Vi du
//	struct SDiem2D
//	{
//		int m_nx;
//		int m_ny;
//	}
//	Trong C++, struct là m?t ki?u d? li?u c?u trúc du?c s? d?ng d? luu tr? các bi?n có ki?u d? li?u khác nhau trong m?t c?u trúc d? li?u don gi?n.
//
//	Ví d?, b?n có th? d?nh nghia m?t struct d? luu tr? thông tin v? m?t ngu?i bao g?m tên, tu?i và d?a ch? nhu sau:
//
//	c++
//	Copy code
//	struct Person {
//  	std::string name;
//  	int age;
//  	std	::string address;
//	};
//	Sau dó, b?n có th? khai báo bi?n ki?u Person và truy xu?t các thu?c tính bên trong nhu sau:
//
//	c++
//	Copy code
//	Person person1;
//	person1.name = "John";
//	person1.age = 25;
//	person1.address = "123 Main St";
//	Các thu?c tính trong struct có th? du?c truy xu?t b?ng d?u ch?m (.) sau tên bi?n.
//
//	Ngoài ra, struct cung có th? ch?a các phuong th?c và các hàm thành viên gi?ng nhu trong l?p, tuy nhiên, các thành viên này m?c d?nh là public. Ví d?:
//
//	c++
//	Copy code
//	struct Person {
//  	std::string name;
//  	int age;
//  	std::string address;
//  
// 	 void display() {
//  	  std::cout << "Name: " << name << std::endl;
//    	std::cout << "Age: " << age << std::endl;
//    	std::cout << "Address: " << address << std::endl;
//  }
//};
//
//	Person person1;
//	person1.name = "John";
//	person1.age = 25;
//	person1.address = "123 Main St";
//
//	person1.display();
//	K?t qu? s? là:
//
//	makefile
//	Copy code
//	Name: John
//	Age: 25
//	Address: 123 Main St


