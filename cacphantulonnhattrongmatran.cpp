#include <iostream>
using namespace std;
int main()
{
    int m ,n; cin >> m >> n;
    int a[m][n];
    
    for(int i = 0 ; i < m ;i++){
        for(int j = 0 ; j < n ;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < m ;i++){
        int max = a[i][0];
        for(int j = 1 ; j < n ;j++){
            if(max < a[i][j]) max = a[i][j]; 
        }
        cout << max << " ";
    }    
    cout << endl;
    for(int i = 0 ; i < n ;i++){
        int max_n = a[0][i];
        for(int j = 1 ; j < m ;j++){
            if(max_n < a[j][i]) max_n = a[j][i]; 
        }
        cout << max_n << " ";
    }  
    return 0;
}

