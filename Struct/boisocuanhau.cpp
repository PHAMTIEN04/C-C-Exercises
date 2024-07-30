#include <iostream>
using namespace std;
int main()
{
    long long m,n; cin >> m >> n;
    if((m/n)*n == m || (n/m) *m == n){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}
