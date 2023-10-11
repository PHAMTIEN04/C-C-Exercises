#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
//	int n;
//	cin >> n ;
//	int *a = new int[n];
//	
//	for(int i = 0 ; i < n ;i++){
//		cin >> a[i];
//	}
//	for (int i=0;i<n-1;i++){
//    	for(int j = i + 1; j < n; j++)
//        {
//            if(a[i] > a[j]){
//                int tg = 0;
//				tg = a[i];
//                a[i] = a[j];
//                a[j] = tg;
//}}
//}
//	for(int i = 0; i < n;i++){
//		cout << a[i]<<" ";
//	}

    return 0;
}
