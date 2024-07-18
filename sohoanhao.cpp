#include <iostream>
using namespace std;

int main()
{
    int n;cin >>n;
    long long sum = 0;
    for(int i = 1 ; i < n;i++){
        if(n % i == 0){
            sum +=i;
        }
    }
    
    if(sum != n){
        cout << "No";
    }else{
        cout << "Yes\n";
        for(int i = 1 ; i < n;i++){
            if(n % i == 0){
                cout << i << " ";        
        }
    }
    }
    

    
    return 0;
}
