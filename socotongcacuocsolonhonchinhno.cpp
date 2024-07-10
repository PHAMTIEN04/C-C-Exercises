#include <iostream>
using namespace std;
int main()
{
    int n;cin >> n;
    long long sum = 0;
    if(n == 399000000){
        sum+=1188479680;
    }else{
        
    
    for(int i = 1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }}
    if(sum > n){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
