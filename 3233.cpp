#include <iostream>
#include <math.h>
using namespace std;
#define MOD 1000000007
unsigned long long ZO(unsigned long long n,unsigned long long c,unsigned long long d){
    if(n == 1){
        return c;
        
    }
    else if(n == 0){
        return d;
    }
    else{
        return (ZO(n-1,c,d) + 2*ZO(n-2,c,d))% MOD;
    }
}
unsigned long long F32(unsigned long long n,unsigned long long a,unsigned long long b,unsigned long long c,unsigned long long d){
    if(n == 1) {
        return a;
    } 
    else if(n == 0){
        return b;
    }
    else{
        return (3*F32(n-1,a,b,c,d) 
                + 2*F32(n-2,a,b,c,d)
                + ZO(n,c,d)
                + ZO(n-1,c,d)
                + ZO(n-2,c,d))%MOD;
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    unsigned long long a,b,c,d,n;
    cin >> a >> b >> c >> d >> n;
    cout << F32(n,a,b,c,d) % MOD;
    return 0;
}
