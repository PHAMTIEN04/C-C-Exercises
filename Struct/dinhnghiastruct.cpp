#include <iostream>

using namespace std;
typedef struct 
{
	string masv;
	string tensv;
	string ntns;
	string phai;
	float dtoan,dly,dhoa;
	
	
}ttsv;
int main(){
	ttsv sv1,sv2,sv3,sv4,sv5,sv6,sv7;
	sv1.masv = "22T123123";
	sv1.tensv = "Le Van A";
	sv1.ntns = "12-1-1999";
	sv1.phai = "Khong";
	sv1.dtoan = 5.6;
	sv1.dly = 1;
	sv1.dhoa = 2;
	cout << sv1.dtoan << "\n"<< sv1.dly <<"\n"<< sv1.dhoa;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
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
