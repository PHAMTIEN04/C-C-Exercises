#include "matrix.h"

void Matrix::OutputMatrix(){
	cout << "**Output**"<<endl;
	for(int i = 0 ; i < m;i++){
		for(int j = 0; j < n;j++){
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}
void Matrix::InputMatrix(){
	cout << "**Input**"<< endl;
	 if (m == 0 && n == 0) {
            cin >> m >> n;
        }
        a = new int*[m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    }
void Matrix::sort() {
	cout <<"**Sort**" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = i; k < m; k++) {
                int start = (k == i) ? j + 1 : 0; // B?t d?u t? v? trí h+1 trong hàng d?u tiên, ho?c t? d?u hàng ti?p theo
                for (int h = start; h < n; h++) {
                    if (a[i][j] > a[k][h]) {
                        int temp = a[i][j];
                        a[i][j] = a[k][h];
                        a[k][h] = temp;
                    }
                }
            }
        }
    }
}
void Matrix::maxmin(){
	cout <<"**MAXMIN**"<<endl;
	int max = a[0][0];
	int min = a[0][0];
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
			if(min > a[i][j]){
				min = a[i][j];
			}
		}
	}
		cout <<"Max: "<< max<< endl;
		cout <<"Min: "<< min<< endl;
}

