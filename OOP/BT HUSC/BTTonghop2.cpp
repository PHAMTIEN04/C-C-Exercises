#include <bits/stdc++.h>

using namespace std;
class Media{
	private:
		string mapt;
		int namxb;
		int giaban;
	public:
		Media(string mapt = "",int namxb = 0,int giaban = 0){
			this->mapt =  mapt;
			this->namxb = namxb;
			this->giaban = giaban;
		}
		
		string setmpt(string mapt){
			this->mapt = mapt;
		}
		int setnxb(int namxb){
			this->namxb = namxb;
		}
		int setgb(int giaban){
			this->giaban = giaban;
		}
		
		string getmpt(){
			return this->mapt;
		}
		int getnxb(){
			return this->namxb;
		}
		int getgb(){
			return this->giaban;
		}
		
		void nhap(){
//			cout << "Nhap Thong Tin Phuong Tien"<< endl;
			cout << "Ma phuong tien: "; 
			cin >> this ->mapt;
			cin.ignore();
			cout << "Nam xuat ban: ";
			cin >> this ->namxb;
			cin.ignore();
			cout << "Gia ban: ";
			cin >> this -> giaban;
			cin.ignore();
		}
		void hienthi(){
//			cout << "Hien Thi Thong Tin Phuong Tien" << endl;
			cout << "Ma phuong tien: " << this->mapt << " ";
			cout << "Nam xuat ban: " << this->namxb << " ";
			cout << "Gia ban: " << this->giaban << " ";
		
		}
};
class Book:public Media{
	private:
		string tensach,tacgia;
		int sotrang;
	public:
		Book(string tensach = "",string tacgia = "",int sotrang =0){
			this->tensach = tensach;
			this->tacgia = tacgia;
			this->sotrang = sotrang;
		}
		string setts(string tensach){
			this->tensach = tensach;
		}
		string settg(string tacgia){
			this->tacgia = tacgia;
		}
		int setst(int sotrang){
			this->sotrang = sotrang;
		}
		
		string getts(){
			return this->tensach;
		}
		string gettg(){
			return this->tacgia;
		}
		int getst(){
			return this->sotrang;
		}
		
		void nhap(){
//			cout << "Nhap Thong Tin Sach" << endl;
			Media::nhap();
			cout << "Ten sach: ";
			getline(cin,this->tensach);
			cout << "Tac gia: ";
			getline(cin,this->tacgia);
			cout << "So trang: ";
			cin >> this->sotrang;
			cin.ignore();  
		}
		
		void hienthi(){
			Media::hienthi();
			cout << "Ten sach: " << this->tensach << " ";
			cout << "Tac gia: " << this->tacgia << " ";
			cout << "So trang: " << this->sotrang << " ";
			cout << endl;
		}
		
		bool operator >(Book b){
			return this->sotrang > b.sotrang;
		}
};
class QuanLyBook{
	private:
		int n;
		Book *b;
	public:
		QuanLyBook(int n = 0){
			this ->n = n;
			if(this->n == 0){
				cout << "Nhap So Luong Sach: ";
				cin >> this->n;
				cin.ignore();
			}
			b = new Book[this->n];
			cout << "Nhap Thong Tin Sach\n";
			for(int i = 0 ; i < this->n;i++){
				cout << "Book [" << i+1 << "]"<<endl;
				b[i].nhap();
			}
		}
		void hienthi(){
			cout << "Hien Thi Thong Tin Sach\n";
			for(int i = 0;i < this->n;i++){
				cout << "Book [" << i+1 << "]"<<endl;
				b[i].hienthi();
			}
		}
		void sapxep(){
			cout << "\nSap Xep Tang Dan Theo So Trang\n";
			for(int i = 0 ; i < this->n-1;i++){
				for(int j = i + 1;j < this->n;j++){
					if(b[i].getst() > b[j].getst()){
						Book tmp = b[i];
						b[i] = b[j];
						b[j] = tmp;
					}
				}
			}
			hienthi();
		}
		void max(){
			cout << "\nNhung cuon sach co gia ban cao nhat\n";
			int max;
			max = b[0].getgb();
			for(int i = 1;i < this->n ; i++){
				if(max < b[i].getgb()){
					max = b[i].getgb();
				}
			}
			for(int i = 0;i < this->n ; i++){
				if(b[i].getgb() == max){
					b[i].hienthi();
				}
			}
		}
		void sum(){
			int sumst= 0;
			int sumgt= 0;
			for(int i = 0 ; i < this->n;i++){
				sumst += b[i].getst();
				sumgt += b[i].getgb();
			}
			cout << endl;
			cout << "Tong So Trang: "<<sumst << endl;
			cout << "Tong Gia Tri: "<<sumgt << endl;
			 
		}
		void xoa(){
			string tg;
			cout << "\nNhap Tac Gia muon xoa: ";
			getline(cin,tg);
			int cnt = 0;
			for(int i = 0;i < this->n;i++){
				if(b[i].gettg() == tg){
					cnt++;
				}
			}
			for(int i = 0 ; i < this->n-1;i++){
				for(int j = i + 1; j < this->n;j++){
					if(b[i].gettg() == tg){
						Book tmp;
						tmp = b[i];
						b[i] = b[j];
						b[j] = tmp;
					}
				}
			}
			this->n = this->n - cnt;
			hienthi();
			
		}
};

int main(){
	QuanLyBook qlb1;
	qlb1.sapxep();
	qlb1.max();
	qlb1.sum();
	qlb1.xoa();
	return 0;
}

