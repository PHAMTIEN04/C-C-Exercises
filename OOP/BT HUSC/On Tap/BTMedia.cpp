#include <bits/stdc++.h>

using namespace std;
class Media{
	protected:
		string mpt;
		int nxb,gb;
	public:
		Media(string mpt = "",int nxb = 0,int gb = 0):mpt(mpt),nxb(nxb),gb(gb){};
		string getmpt(){
			return this->mpt;
		}
		void setmpt(string mpt){
			this->mpt = mpt;
		}
		int getnxb(){
			return this->nxb;
		}
		void setnxb(int nxb){
			this->nxb = nxb;
		}
		int getgb(){
			return this->gb;
		}
		void setgb(int gb){
			this->gb = gb;
		}
		virtual void nhap(){
			cout << "Nhap ma phuong tien: ";
			getline(cin,this->mpt);
			cout << "Nhap nam xuat ban: ";
			cin >> this->nxb; cin.ignore();
			cout << "Nhap gia ban: ";
			cin >> this->gb; cin.ignore();
		}
		virtual void hienthi(){
			cout << "Ma phuong tien: "<< this->mpt<<endl;
			cout << "Nam xuat ban: "<< this->nxb << endl;
			cout << "Gia ban: "<< this->gb<<endl;
		}
		
};

class Book:public Media{
	private:
		string ts,tg;
		int st;
	public:
		Book(string ts = "",string tg="",int st = 0,string mpt = "",int nxb = 0,int gb = 0):ts(ts),tg(tg),st(st),Media(mpt,nxb,gb){};
		string getts(){
			return this->ts;
		}
		void setts(string ts){
			this->ts = ts;
		}
		string gettg(){
			return this->tg ;
		}
		void settg(string tg){
			this->tg = tg;
		}
		int getst(){
			return this->st;
		}
		void setst(int st){
			this->st = st;
		}
		void nhap(){
			Media::nhap();
			cout << "Nhap ten sach: ";
			getline(cin,this->ts);
			cout << "Nhap tac gia: ";
			getline(cin,this->tg);
			cout << "Nhap so trang: ";
			cin >> this->st; cin.ignore();
		}
		void hienthi(){
			Media::hienthi();
			cout << "Ten sach: "<< this->ts<<endl;
			cout << "Tac gia: "<< this->tg<< endl;
			cout << "So trang: "<<this->st<<endl;
			
		}
		bool operator >(Book other){
			return this->st > other.st;
		}
};
class QL{
	private:
		Book a[50];
		int n;
	public:
		QL(int n = 0){
			this->n = n;
		}
		void nhapdanhsach(){
			if(this->n == 0){
				cout << "Nhap so luong sach: ";
				cin >> this->n;cin.ignore();
			}
			for(int i = 0 ; i < n ;i++){
				cout<< "Sach ["<<i+1<<"]"<<endl;
				a[i].nhap();
			}  
		}
		void sapxepsach(){
			for(int i = 0; i < n-1;i++){
				for(int j = i + 1;j < n;j++){
					if(a[i] > a[j]){
						Book tmp;
						tmp = a[i];
						a[i] = a[j];
						a[j] = tmp;
					}
				}
			}
			cout << "\nSach Da Sap Xep\n";
			for (int i = 0 ;i< n;i++){
				cout<< "Sach ["<<i+1<<"]"<<endl;
				a[i].hienthi();
			}
		}
		void sachmax(){
			cout << "\nNhung sach co gia ban cao nhat\n";
			int max = a[0].getgb();
			for(int i = 0 ; i < n;i++){
				if(max < a[i].getgb()){
					max = a[i].getgb();
				}
			}
			
			for(int i = 0 ; i < n;i++){
				if(a[i].getgb()==max){
					cout<< "Sach ["<<i+1<<"]"<<endl;
					a[i].hienthi();
				}
			}
			
		}
		void sum(){
			cout << "\nSum\n";
			int sum_t,sum_g;
			sum_t = 0;
			sum_g = 0;
			for(int i = 0;i<n;i++){
				sum_t += a[i].getst();
				sum_g += a[i].getgb();
			}
			cout << "Tong so trang sach: "<<sum_t<<endl;
			cout << "Tong gia tri sach: "<<sum_g<<endl;
		}
		
		void xoattg(){
			cout << "\nXoa Tac Gia\n";
			cout << "Nhap Tac Gia muon xoa: "; 
			string tg;
			getline(cin,tg);
			int cnt = 0;
			for(int i = 0 ; i < n ;i++){
				if(tg == a[i].gettg()){
					cnt++;
				}
			}

			for(int i = 0 ; i < n ;i++){
				for (int j = i+1;j<n;j++){
					if(tg == a[i].gettg()){
						Book tmp;
						tmp = a[i];
						a[i] = a[j];
						a[j] = tmp;
	
					}
				}
			}
			this->n -= cnt;
			if(cnt == 0){
				cout << "Khong tim thay!!!"<<endl;
			}
			else{
				cout << "Da xoa thanh cong!!!"<<endl;
			}
			
			
		}
		void hienthidanhsach(){
			for(int i = 0 ; i < n ;i++){
				cout<< "Sach ["<<i+1<<"]"<<endl;
				a[i].hienthi();
			}  
		}
};
int main(){
	QL ql;
	ql.nhapdanhsach();
	ql.sapxepsach();
	ql.sachmax();
	ql.sum();
	ql.xoattg();
	ql.hienthidanhsach();

	


	return 0;
}

