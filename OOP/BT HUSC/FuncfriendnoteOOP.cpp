#include <iostream>
using namespace std;
//class phanso{
//	private:
//		int tu;
//		int mau;
//	public:
//		phanso(int t , int m):tu(t),mau(m){};
//		void khoitao();
//		void hienthi();
//		friend float cong(phanso &ps,phanso &ps1);
//};
//
//void phanso::hienthi(){
//	std::cout << "**Output**\n";
//	std::cout << "Tu: "<<tu<<std::endl;
//	std::cout << "Mau: "<<mau<<std::endl;
//}
//float cong(phanso &ps,phanso &ps1){
//	return (ps.tu*ps1.mau + ps1.tu *ps.mau) / ps.mau * ps1.mau;
//}
class Vecto{
	int n; //so phan tu cua vecto
	float *v; //mang dong chua cac phan tu cua vecto
	public:
		Vecto(){
			n=0;v=NULL;
		}
		Vecto(int nn){
			n=nn;
			v=new float[n];	//cap phat mang dong chua n so thuc
		}
		~Vecto(){
			n=0;
			delete []v;	//thu hoi vung nho da cap phat
		}
		void nhap();
		void hienThi();
		friend Vecto tich(Matrix a,Vecto x);		
};
void Vecto::nhap(){
	for (int i=0;i<n;i++){
		cout<<"v["<<i<<"]=";
		cin>>v[i];
	}
}
void Vecto::hienThi(){
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
}


class Matrix{
	private:
		int m,n;
		int **a;
	public:
		Matrix(int h = 0, int c = 0){
			m = h;
			n = c;
			if(m == 0 && n == 0){
				a = NULL;
			}
			else{
			a = new int*[m]; //cap phat cho hang
			for(int i = 0; i < m;i++){
				a[i] = new int[n];
			}
			}

		}
		void IMatrix(){
			if(a == NULL){
				cin >> m >> n;
			}
			a = new int*[m]; //cap phat cho hang
			for(int i = 0; i < m;i++){
				a[i] = new int[n];	//cap phat cho cot		
			}
			for(int i = 0; i < m;i++){
				for(int j = 0; j < n;j++){
					cin >> a[i][j];
		}
	}
		}
		
		void OMatrix(){
			for(int i = 0;i < m ;i++){
				for(int j = 0; j < n; j++){
					cout << a[i][j] << " ";
				}
				cout << endl;
		}	

	}
		Matrix AMatrix(Matrix &a){
			Matrix rs(m,n);
			for(int i = 0 ; i < m ; i++){
				for(int j = 0 ; j < n;j++){
					rs.a[i][j] = this->a[i][j] + a.a[i][j]; 
				}
			}
			return rs;
		}
		void SMatrix();
		void MMatrix();
		friend Vecto tich(Matrix a,Vecto x);

};
Vecto tich(Matrix a,Vecto x)
	{
	    int n=a.n;
	    if (n!=x.n)
	        return x;
		Vecto y(n);
	    for (int i=0; i<n; ++i)
	        {		        
	            y.v[i]=0;
	            for (int j=0; j<n; ++j) 
					y.v[i]+=a.a[i][j]*x.v[j];
	        }
	    return y;
	}

int main(){






}

