#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n; cin >>x>> n;
    long long sum = pow(x,0)-1;
    for(int i = 1; i <= n;i++){
        if(i%2 == 0){
            sum+=pow(x,i);
        }
    }
    cout << sum;
    return 0;
}
