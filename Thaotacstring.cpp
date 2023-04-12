#include <bits/stdc++.h>

using namespace std;
int main(){
	// size()
	// Cu Phap : <chuoi>.size()
	// Cong Dung : Tra ve kich thuoc cua chuoi
	string str = "Pham Phuoc Tien";
	cout << "size()" << endl;
	cout << "String : " << str<< endl;
	cout << "Kich Thuoc :" <<str.size()  << endl;
	cout << endl;
	
	// empty()
	// Cu Phap : <chuoi>.empty()
	// Cong Dung : Kiem tra xem chuoi co rong hay khong
	cout << "empty()" << endl;
	if (str.empty() == true)
	{
		cout << "Day la chuoi rong\n";
	}
	else{
		cout << "Day khong phai la chuoi rong\n";
	}
	cout << endl;
	
	// clear()
	// Cu Phap : <chuoi>.clear()
	// Cong Dung : Xoa tat ca ki tu trong chuoi 
	cout << "clear()" << endl;
	string str_clear = "Chuoi nay se bi xoa ";
	cout << "After : " << str_clear << endl; 
	str_clear.clear();
	cout << "Before : " << str_clear  << endl;
	cout << endl;
	
	// append()
	// Cu Phap : <chuoi>.append(str)
	// Cong Dung : Noi chuoi str vao cuoi chuoi hien tai
	string str_append = " IT";
	cout << "append()" << endl;
	cout << "After :" << str << endl;
	cout << "Before :" << str.append(str_append)<< endl;
	cout << endl;
	
	// substr()
	// Cu Phap : <Chuoi>.substr(pos,len)
	// Cong Dung : Tra ve mot chuoi con cua chuoi hien tai,
	// bat dau tu vi tri pos va co do dai len
	cout << "substr()" << endl;
	cout << "After :" <<str << endl;
	cout << "Before :"<< str.substr(0,5)<< endl;
	cout << endl;
	
	// erase()
	// Cu Phap : <Chuoi>.erase(pos,len)
	// Cong Dung : Xoa mot phan cua chuoi bat dau tu vi tri pos
	// va co do dai len
	cout << "erase()" << endl;
	string str_erase = "Xoa mot phan cua chuoi";
	cout << "After :" << str_erase << endl; 
	cout << "Before :"<<str_erase.erase(0,3) << endl;
	cout << endl;
	
	// replace()
	// Cu Phap : <Chuoi>.replace(pos,len,str)
	// Cong Dung : Thay the mot phan cua chuoi bat dau tu vi tri
	// pos va co do dai len bang chuoi str
	cout << "replace()" << endl;
	string str_replace = "Thay the mot phan chuoi";
	cout << "After :" << str_replace << endl;
	cout << "Before :" << str_replace.replace(0,4,"Tien")<<endl;
	cout << endl;
	
	// find()
	// Cu Phap : <Chuoi>.find(str)
	// Cong Dung : Tim kiem chuoi con str trong chuoi hien tai, tra ve vi tri
	// dau tien ma chuoi con nay xuat hien hoac 'str::string::npos' neu khong tim thay
	cout << "find()"<< endl ;
	string str_find = "Tim kiem chuoi con";
	string str_check_find = "Tim";
	cout << "After :" << str_find << endl;
	cout << "Tim Kiem :" << str_check_find << endl;
	if(str_find.find(str_check_find) == string::npos){
		cout  <<"Before :"<< "Khong tim thay" << endl;
	}
	else{
		cout  <<"Before : Ton tai" << endl;
		cout << "Vi tri : " << str_find.find(str_check_find)<<endl;
	}
	cout << endl;
	
	// rfind()
	// Cu Phap : <Chuoi>.find(str)
	// Cong Dung : Tim kiem chuoi con str trong chuoi hien tai, tra ve vi tri
	// cuoi cung ma chuoi con nay xuat hien hoac 'str::string::npos' neu khong tim thay
	cout << "rfind()"<< endl ;
	string str_rfind = "Tim kiem chuoi con Tim";
	string str_check_rfind = "Tim";
	cout << "After :" << str_rfind << endl;
	cout << "Tim Kiem :" << str_check_rfind << endl;
	if(str_rfind.rfind(str_check_rfind) == string::npos){
		cout  <<"Before :"<< "Khong tim thay" << endl;
	}
	else{
		cout  <<"Before : Ton tai" << endl;
		cout << "Vi tri : " << str_rfind.rfind(str_check_rfind);
	}
	
	
	
	return 0;
}

