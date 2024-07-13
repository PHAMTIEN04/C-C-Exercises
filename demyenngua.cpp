#include <iostream>
using namespace std;

int main()
{
    int m,n;cin >> m >> n;
    int a[m][n];
    for(int i = 0 ; i < m ;i++){
        for(int j = 0 ; j < n;j++){
            cin >> a[i][j];
        }
    }
    cout << "Cac phan tu yen ngua la:" <<endl;
    bool c = false;
    for(int i = 0 ; i < m ;i++){
        int min = a[i][0];
        int vt_i = 0;
        int vt_j = 0;
        for(int j = 0 ; j < n;j++){
            if(min >= a[i][j]){
                min = a[i][j];
                vt_i = i;
                vt_j = j;
            }
        }
        cout << vt_i << " ";
        int k = 0;
        int max = a[k][vt_j];
        int vt_k = 0;
        while(k < m){
            // cout << max << " " << a[k][vt_j]<<endl;
            if(max <= a[k][vt_j]){
                max = a[k][vt_j];  
                vt_k = k;
            } 
            k++;
        }
        if(vt_k == vt_i){
            cout << "("<< vt_k +1 << "," << vt_j+1<< "); ";
            c = true;
        }
    }
    if(c == false){
        cout << "Khong co phan tu yen ngua";
    }
    return 0;
}
//sai 3 test
