#include <iostream>
using namespace std;
class Matrix{
	private:
		int m,n;
		int **a;
	public:
		Matrix(int h = 0, int c = 0){
			m = h;
			n = c;
		
			a = new int*[m]; //cap phat cho hang
			for(int i = 0; i < m;i++){
				a[i] = new int[n];
			}
		}
		void IMatrix(){
			if(m == 0 && n == 0){
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

};

	
int main(){
	cout << "Matrix 1\n";
	Matrix a;
	a.IMatrix();
	a.OMatrix();
	cout << "Matrix 2\n";
	Matrix a1;
	a1.IMatrix();
	a1.OMatrix();
	Matrix a2 = a.AMatrix(a1);
	a2.OMatrix();
	






	return 0;
}

