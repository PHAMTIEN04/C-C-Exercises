#include <iostream>
using namespace std;
int main()
{
    float n,p; cin >> n >> p;
    int x,y;
    x = n;y=p;
    float s1 ; s1 = (n / p)/4;
    int s2 ; s2 = (x / y)/4;
    if(s1 > s2){
        cout << s2 + 1;
    }
    if(s1 == s2){
        cout << s2;
    }
    return 0;
}
