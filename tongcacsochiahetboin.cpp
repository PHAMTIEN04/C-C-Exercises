#include <iostream>
using namespace std;
int main()
{
    long long n; cin >> n;
    long long sum =0;
    long long c = n;
    while(n!=0){
        sum +=n%10;
        n=n/10;
        
    }
    
    if(c%sum==0){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}

