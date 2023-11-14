#include <iostream>
using namespace std;
class PhanSo{
    int tu,mau;
    public:
//static PhanSo tong(PhanSo ps1 , PhanSo ps2);
    PhanSo(){
        tu=0;mau=0;
    }
 PhanSo (int a,int b)
    {
        tu=a;
        mau=b;
    }
   
    void inPS(){
        cout<<"("<<tu<<"/"<<mau<<")"<<endl;
    }
    static PhanSo tong(PhanSo ps1,PhanSo ps2){
        PhanSo p;
        p.tu=ps1.tu+ps2.tu;
        p.mau=ps1.mau;
        return p;
    }
    friend PhanSo operator +(PhanSo ps1,PhanSo ps2 );
    PhanSo operator -(PhanSo ps2 );
    PhanSo operator =(PhanSo right);
    bool operator ==(PhanSo ps2 );
    PhanSo operator +=(int x );
    PhanSo& operator ++( );
    PhanSo operator ++(int);
    friend istream& operator >>(istream& in, PhanSo &ps);
    friend ostream& operator <<(ostream& out, PhanSo ps);
};
istream& operator >>(istream& in, PhanSo& ps){
    cout<<"Nhap tu so=";
    in>>ps.tu;    
    cout<<"Nhap mau so=";
    in>>ps.mau;    
    return in;
}
ostream& operator <<(ostream& out, PhanSo ps){
    out<<ps.tu<<"/";
    out<<ps.mau;
    out<<endl;
    return out;
}
PhanSo operator +(PhanSo ps1,PhanSo ps2 ){
    PhanSo p;
    p.tu=ps1.tu*ps2.mau+ps2.tu*ps1.mau;
    p.mau=ps1.mau*ps2.mau;
    return p;    
}
PhanSo PhanSo::operator -(PhanSo ps2 ){
/*    this->tu=this->tu*ps2.mau- ps2.tu*this->mau; // tu=tu*ps2.mau- ps2.tu*mau;
    this->mau=this->mau*ps2.mau;                 // mau=mau*ps2.mau;
    return *this;
*/
    PhanSo p;
    p.tu= this->tu*ps2.mau-ps2.tu* this->mau;
    p.mau= this->mau*ps2.mau;
    return p;        
}
PhanSo PhanSo::operator =(PhanSo right){
    this->tu=right.tu;
    this->mau=right.mau;
    return *this;
}
PhanSo PhanSo::operator +=(int x ){
    tu=tu+x;
    mau=mau+x;
    return *this;
}
bool PhanSo::operator ==(PhanSo ps2 ){
    return  tu * ps2.mau == ps2.tu * mau;
}
PhanSo& PhanSo::operator ++( ){
    tu=tu+1;
	mau=mau+1;
    return *this;
}
PhanSo PhanSo::operator ++(int){
	PhanSo ps=*this;
    tu=tu+1;mau=mau+1;
    return ps;
}
int main()
{
    PhanSo ps1(4,7);
    PhanSo ps2(9,7);
    cout<<"nhap phan so 1: "<<endl;
    cin>>ps1;
    cout<<"nhap phan so 2: "<<endl;
    cin>>ps2;
    //PhanSo ps3= PhanSo::tong(ps1,ps2);
    PhanSo ps3;
    ps3=ps1+ps2;
	cout<<"tong ps1 va ps2=";cout<<ps3;
    ps3=ps1-ps2;
	cout<<"Hieu ps1 va ps2=";ps3.inPS();
    PhanSo ps4=ps3; 
	cout<<"Ps4=";ps4.inPS();
    cout<<"ps3 = ps4? " <<(ps3==ps4) <<endl;
    ps4+=2;cout<<"Ps4 sau khi tang len 2=";cout<<ps4 ;
    cout<<"++Ps4 =";cout<<++ps4;
	cout<<"Ps4++ =";    
	cout<<(ps4++);
	cout<<"Ps4 sau PS4++ =";    
	cout<<ps4;	
	
}
