#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    int max = a[0];
    for(int i = 1;i < n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    long long sum = 0;
    for(int i = 0 ; i < n;i++ ){
        if(a[i] != max){
            sum += a[i];
        }
    }
    cout << sum;
    return 0;
}
