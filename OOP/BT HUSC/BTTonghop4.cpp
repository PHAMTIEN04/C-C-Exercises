#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class PTGT{
	protected:
		string id,hsx;
		int nsx;
		float giaban;
		string mauxe;
	public:
		PTGT(string id ="",string hsx ="",int nsx = 0,float giaban = 0,string mauxe = ""):id(id),hsx(hsx),nsx(nsx),giaban(giaban),mauxe(mauxe){};
		
		virtual void hienthi(){
			cout << "ID: "<<this->id << endl;
			cout << "Hang san xuat: "<<this->hsx<<endl;
			cout << "Nha san xuat: "<<this->nsx<<endl;
			cout << "Gia ban: "<<this->giaban<<endl;
			cout << "Mau xe: "<<this->mauxe<<endl;
		}
		string gethsx(){
			return this->hsx;
		}
		string getmauxe(){
			return this->mauxe;
		}
		string getid(){
			return this->id;
		}
};

class OTO:public PTGT{
	protected:
		int scn;
		string kdc;
	public:
		OTO(int scn=0,string kdc ="",string id ="",string hsx ="",int nsx = 0,float giaban = 0,string mauxe = ""):scn(scn),kdc(kdc),PTGT(id,hsx,nsx,giaban,mauxe){};
		
		void hienthi(){
			cout << "**OTO**\n";
			PTGT::hienthi();
			cout << "So cho ngoi: "<<this->scn<<endl;
			cout << "Kieu dong co: "<<this->kdc<<endl;
		}
};

class XEMAY:public PTGT{
	protected:
		int cs;
	public:
		XEMAY(int cs=0,string id ="",string hsx ="",int nsx = 0,float giaban = 0,string mauxe = ""):cs(cs),PTGT(id,hsx,nsx,giaban,mauxe){};
		
		void hienthi(){
			cout << "**XEMAY**\n";
			PTGT::hienthi();
			cout << "Cong suat: "<<this->cs<<endl;
		}
};


class XETAI:public PTGT{
	protected:
		int tt;
	public:
		XETAI(int tt=0,string id ="",string hsx ="",int nsx = 0,float giaban = 0,string mauxe = ""):tt(tt),PTGT(id,hsx,nsx,giaban,mauxe){};
		
		void hienthi(){
			cout << "**XETAI**\n";
			PTGT::hienthi();
			cout << "Trong tai: "<<this->tt<<endl;
		}
};

class QLPTGT{
	private:
		PTGT *pt[100];
		int n;
	public:
		QLPTGT(int n =0){
			this->n = n;
		}
		
		void themphuongtien(){
			cout <<"**Them Phuong Tien**"<<endl;
			cout <<"1.Oto"<<endl;
			cout <<"2.Xe may"<<endl;
			cout <<"3.Xe tai"<<endl;
			int choose;
			cout << "Chon: "; cin >> choose;
			cin.ignore();
			switch(choose){
				case 1:{
					cout << "-Nhap thong tin oto:"<<endl;
					string id,hsx;
					int nsx;
					float giaban;
					string mauxe;
					int scn;
					string kdc;
					cout << "ID: "; getline(cin,id); 
					cout << "Hang san xuat: "; getline(cin,hsx); 
					cout << "Nam san xuat: "; cin >> nsx; cin.ignore();
					cout << "Gia ban: "; cin >> giaban; cin.ignore();
					cout << "Mau xe: "; getline(cin,mauxe); 
					cout << "So cho ngoi: "; cin>> scn; cin.ignore();
					cout << "Kieu dong co: "; getline(cin,kdc); 
					
					pt[n] = new OTO(scn,kdc,id,hsx,nsx,giaban,mauxe);
					n++; 
					break;
				}
				
				case 2:{
					cout << "-Nhap thong tin xe may:"<<endl;
					string id,hsx;
					int nsx;
					float giaban;
					string mauxe;
					int cs;
					cout << "ID: "; getline(cin,id);
					cout << "Hang san xuat: "; getline(cin,hsx);
					cout << "Nam san xuat: "; cin >> nsx; cin.ignore();
					cout << "Gia ban: "; cin >> giaban; cin.ignore();
					cout << "Mau xe: "; getline(cin,mauxe);
					cout << "Cong suat: "; cin>>cs; cin.ignore();
										
					pt[n] = new XEMAY(cs,id,hsx,nsx,giaban,mauxe);
					n++; 
					break;
				}
				
				case 3:{
					cout << "-Nhap thong tin xe tai:"<<endl;
					string id,hsx;
					int nsx;
					float giaban;
					string mauxe;
					int tt;
					cout << "ID: "; getline(cin,id);
					cout << "Hang san xuat: "; getline(cin,hsx);
					cout << "Nam san xuat: "; cin >> nsx; cin.ignore();
					cout << "Gia ban: "; cin >> giaban; cin.ignore();
					cout << "Mau xe: "; getline(cin,mauxe);
					cout << "Trong tai: "; cin>>tt; cin.ignore();
										
					pt[n] = new XETAI(tt,id,hsx,nsx,giaban,mauxe);
					n++; 
					break;
				}
			}
		}
		
		void hienthiphuongtien(){
			cout <<"**Hien Thi Phuong Tien**\n";
			for(int i = 0 ; i < n ;i++){
				pt[i]->hienthi();
			}
		}
		
		void timkiem(){
			string hsx,mauxe;
			cout << "**Tim Kiem Phuong Tien**"<<endl;
			cout << "Hang san xuat: "; getline(cin,hsx);
			cout << "Mau xe: "; getline(cin,mauxe);
			cout << "...Dang Tim Kiem !!!"<<endl;
			bool check = false;
			for(int i = 0;i < n;i++){
				if(pt[i]->gethsx() == hsx && pt[i]->getmauxe() == mauxe){
					pt[i]->hienthi();
					check = true;
				}
			}
			if(check == false){
				cout << "Khong tim thay phuong tien!!!"<< endl;
			}
		}
		
		void xoa(){
			string id;
			cout << "**Xoa Phuong Tien**"<<endl;
			cout << "ID: "; getline(cin,id);
			for(int i = 0; i < n-1;i++){
				for(int j = i+1;j < n;j++){
					if(pt[i]->getid() == id){
						PTGT *tmp;
						tmp = pt[i];
						pt[i]= pt[j];
						pt[j]= tmp;
					}
				}
			}
			int cnt = 0;
			for(int i = 0 ; i < n;i++){
				if(pt[i]->getid()==id){
					cnt++;
				}
			}
			int check = n;
			n = n - cnt;
			if(check == n){
				cout << "Loi!!!"<<endl;
			}
			else{
				cout << "Xoa thanh cong!!!"<<endl;
			}
			
		}
		
		void menu(){
			while(true){
				system("cls");
				cout << "**MENU**"<<endl;
				cout << "1.Them phuong tien"<<endl;
				cout << "2.Hien thi phuong tien"<<endl;
				cout << "3.Tim kiem phuong tien"<<endl;
				cout << "4.Xoa phuong tien"<<endl;
				cout << "0.Thoat\n";
				int choose;
				cout << "Chon: "; cin >> choose;
				cin.ignore();
				switch(choose){
					case 1:{
						system("cls");
						themphuongtien();
						getch();
						break;
					}
					case 2:{
						system("cls");
						hienthiphuongtien();
						getch();
						break;
					}
					case 3:{
						system("cls");
						timkiem();
						getch();
						break;
					}
					case 4:{
						system("cls");
						xoa();
						getch();
						break;
					}
				}
				
				if(choose == 0){
					break;
				}
				
			}
		}
};

int main(){
	QLPTGT ql;
	ql.menu();


	return 0;
}

