#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n ; cin >> m >> n ;
    long long a[m][n];
    for(int i = 0 ; i < m  ; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    long long b[m][n] ;
    for (int i= 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            b[i][j] = a[i][j];
        }
    }

    for (int  i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ;j++ ){
            if (a[i][j] == 1){
                for(int h = 0 ; h < n; h++){
                    b[i][h] = 1;
                }
                for(int  k = 0 ; k < m; k++){
                    b[k][j] = 1;
                }
            }
        }
    }
    
    for (int i = 0 ; i < m;i++){
        for(int j = 0 ; j < n;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
