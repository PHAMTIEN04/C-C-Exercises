#include <bits/stdc++.h>

using namespace std;
struct Con_nguoi
{
	Con_nguoi(string ht,int t, float v1, float cc){
		ho_ten = ht;
		tuoi = t;
		vong_mot = v1;
		chieu_cao = cc; 
		con_zin = true;
	}
	string ho_ten;
	int tuoi;
	float vong_mot;
	float chieu_cao;
	bool con_zin;
};
void pha_zin(Con_nguoi *nguoi){
	
	cout << "Thuc Hien Pha Zin Em " <<(*nguoi).ho_ten<< endl;
	(*nguoi).con_zin = false;
	
	
	
}
int main(){
	Con_nguoi hoi_phu_nu[5]={
	
	Con_nguoi("Thao",22,95,1.65),
	Con_nguoi("Lan",18,90,1.70),
	Con_nguoi("Huong",29,85,1.6), 
	Con_nguoi("Nhung",16,80,1.63),
	Con_nguoi("Tuyet",30,100,1.65),
	
	};
	
	
	Con_nguoi *bo_nhi  ;
//	//thu 2
//	bo_nhi = &hoi_phu_nu[0] ;
//	
//	
//	
//	cout <<"Bo Nhi Thao tuoi:" <<(*bo_nhi).tuoi << endl;
	//thu 3
	
//	bo_nhi = &lan;
//	
//	cout <<"Bo Nhi Lan vong mot :"<< (*bo_nhi).vong_mot<<endl;
//	for (bo_nhi = hoi_phu_nu; bo_nhi < hoi_phu_nu + 5 ;bo_nhi++){
//	
//		cout << (*bo_nhi).vong_mot<< endl;
//	}
//	
	cout << "Truoc Khi Pha Zin Em "<<hoi_phu_nu[3].ho_ten 
	<<(hoi_phu_nu[3].con_zin ? " Con Zin":" Mat Zin")<<endl;
	pha_zin(&hoi_phu_nu[3]);
	cout <<"Sau Khi Thuc Hien Pha Zin Em " <<hoi_phu_nu[3].ho_ten
	<<(hoi_phu_nu[3].con_zin ? " Con Zin":" Mat Zin");



	return 0;
}

