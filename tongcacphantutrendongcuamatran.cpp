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
        long long sum = 0;
        for(int j = 0 ; j < n ;j++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }    
    return 0;
}
