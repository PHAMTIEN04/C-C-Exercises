#include <bits/stdc++.h>

using namespace std;
class mang2chieu{
	private:
		int m,n;
		int **a;
	public:
		mang2chieu(int ma = 0, int na =0){
			this->m = ma;
			this->n = na;
			a = new int*[m];
			for(int i = 0 ; i < m;i++){
				a[i] = new int[n];
			}
		}
		~mang2chieu();
		void nhap(); // Input function
		void xuat(); // Output function
		mang2chieu(mang2chieu &u); // Copy constructor
		void CheckSquareNumberIdMax(int id); // Find maximum square number
		void MultiplyAndFindSecondMax(int id,mang2chieu &other); // Multiply two matrices and find second maximum frequency value
		
};

bool IsSquareNumber(int value){
	int sqrtN = sqrt(value);
	if(sqrtN * sqrtN == value){
		return true;
	}
	return false;
}

void mang2chieu::MultiplyAndFindSecondMax(int ID,mang2chieu& other) {
        int** result = new int*[m];
        for (int i = 0; i < m; i++) {
            result[i] = new int[other.n];
            for (int j = 0; j < other.n; j++) {
                result[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    result[i][j] += a[i][k] * other.a[k][j];
                }
            }
        }

        int maxFrequency = -1;
        int secondMaxFrequency = -1;
        int maxFrequencyValue = 0;
        int secondMaxFrequencyValue = 0;

        int* frequency = new int[1001](); // Array to store frequency of values

        // Calculate the frequency of values
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < other.n; j++) {
                int value = result[i][j];
                frequency[value]++;
                if (frequency[value] > maxFrequency) {
                    secondMaxFrequency = maxFrequency;
                    secondMaxFrequencyValue = maxFrequencyValue;
                    maxFrequency = frequency[value];
                    maxFrequencyValue = value;
                } else if (frequency[value] > secondMaxFrequency && frequency[value] < maxFrequency) {
                    secondMaxFrequency = frequency[value];
                    secondMaxFrequencyValue = value;
                }
            }
        }

        if (maxFrequency == 0 || secondMaxFrequency == 0) {
            std::cout << "Khong tim thay" << std::endl; // Not found
        } else {
            std::cout << "Value with the second highest frequency for ID " << ID << ": ";
            if (ID == 1) {
                std::cout << maxFrequencyValue << std::endl;
            } else if (ID == 2) {
                std::cout << secondMaxFrequencyValue << std::endl;
            }
        }

        // Free memory
        for (int i = 0; i < m; i++) {
            delete[] result[i];
        }
        delete[] result;
        delete[] frequency;
    }

void mang2chieu::CheckSquareNumberIdMax(int id){
	cout << endl;
	cout << "Square number ID Max \n";
	int cnt = 0;
	int max = 0;
	for(int i = 0;i < m;i++){
		for(int j = 0 ; j < n;j++){
			if(IsSquareNumber(a[i][j])){
				cnt++;
				if(cnt == id){
					max = a[i][j];
				}
			}
		}
	}
	if(max == 0 ){
		cout << "Khong tim thay"; // Not found
	}
	else{
		cout << "Square Number "<< id << ": "<< max ;
	}
	cout << endl;
}

mang2chieu::mang2chieu(mang2chieu &u){
	this -> m = u.m;
	this -> n = u.n;
	a = new int*[m];
	for(int i = 0 ; i < m;i++){
		a[i] = new int[n];
		for(int j = 0 ; j < n;j++){
			a[i][j] = u.a[i][j];
		}
	}
	
}
void mang2chieu::nhap(){
	if(m == 0 && n == 0){
		cout << "Input M N: ";
		cin >> m >> n;
		a = new int*[m];
		for(int i = 0 ; i < m ;i++){
			a[i] = new int[n];
		}
	
	}
	cout << "**INPUT MATRIX: "<<m<<"X"<<n<<"**\n";
	for(int i = 0 ; i < m;i++){
		for(int j = 0 ; j < n;j++){
			cin >> a[i][j];
		}
	}
}
void mang2chieu::xuat(){
	cout << "**OUTPUT MATRIX: "<<m<<"X"<<n<<"**\n";
	for(int i = 0;i<m;i++){
		for(int j = 0 ;j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
mang2chieu::~mang2chieu(){
	for(int i = 0 ; i < m ;i++){
		delete []a[i];
	}
	delete []a;
	a = NULL;
}

int main(){
	
	
	mang2chieu m(3,3);
	m.nhap();
	m.xuat();
	int msv1; cout << "MSV1: "; cin >> msv1;
	int msv2; cout << "MSV2: "; cin >> msv2;
	int id = (msv1+msv2)%10+1;
	m.CheckSquareNumberIdMax(id);
	mang2chieu m1(2,3);
	m1.nhap();
	m1.MultiplyAndFindSecondMax(id,m);
	
	return 0;
}
