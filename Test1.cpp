#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        t--;
        int a[n+100];
        for(int i=0; i<n; i++) cin>>a[i];
        if(n==1) cout<<"Yes"<<endl;
        else{
            for(int i=0; i<n; i++){
                if(a[i]<a[i+1]){
                    cout<<"Yes"<<endl;
                    break;
                }else{
                    sort(a,a+n);
                    if(a[i]==a[i+1]){
                        cout<<"No"<<endl;
                        break;
                    }else{
                        cout<<"Yes"<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
