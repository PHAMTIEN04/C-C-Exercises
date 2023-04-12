#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ; cin >> n ;
	    

	int *p ;  p = (int *) malloc(n * sizeof(int));
	for(int i = 0 ; i < n ; i++){
		cin >>*(p + i);
	}
	
	int doi = 0 ;
	for(int i =0 ; i < n -1 ; i++){
		for (int j = i + 1 ; j < n ; j++){
			if (*(p+i)>*(p+j)){
				doi = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = doi;
			}
			
		}
	}

	for(int i= 0 ; i < n ; i++){
		cout << *(p+i) << " ";
	}
	cout << endl;
	int doi1 = 0;
	for(int i =0 ; i < n -1 ; i++){
		for (int j = i + 1 ; j < n ; j++){
			if (*(p+i)<*(p+j)){
				doi1 = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = doi1;
			}
			
		}
	}
	for(int i= 0 ; i < n ; i++){
		cout << *(p+i) << " ";
	}


	return 0;
}

