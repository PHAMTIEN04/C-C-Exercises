#include <iostream>
using namespace std;

int main()
{
    int m; cin >> m;
    int a[m][m];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0;j < m ;j++){
            cin>> a[i][j];
            }
    }
    bool check = false;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0;j < m ;j++){
            if(j == i && a[i][j] != 1){
                check = true;
                break;
            }
            if(j!=i && a[i][j] != 0){
                check = true;
                break;
            }
        }
    }
    if(check == true){
        cout << "No";
    }else{
        cout << "Yes";
    }
    

    
    return 0;
}
