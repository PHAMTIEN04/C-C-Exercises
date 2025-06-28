#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
struct TamTru
{
	string cccd;
	string hoten;
	string sdt;
};
void nhap(int &n,TamTru t[]){
	for(int i=0;i<n;i++){
		getline(cin,t[i].cccd);
		getline(cin,t[i].hoten);
		getline(cin,t[i].sdt);
		
	}
}
void find(int &n,TamTru t[],string cccd){
		bool check = true;
		for(int i=0;i<n;i++){
			if(t[i].cccd == cccd){
				cout<<t[i].cccd<<", ";
				cout<<t[i].hoten<<", ";
				cout<<t[i].sdt<<endl;
				check=true;
				break;
			}else{
				check = false;
				
			}
		}
		if(check == false || n ==0) {
			cout<<"Not found"<<endl;
		}
		
}
void in(int &n,TamTru t[]){
	for(int i =0;i <n;i++){
		cout<<t[i].cccd<<endl;
		cout<<t[i].hoten<<endl;
		cout<<t[i].sdt<<endl;
	}
	
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	TamTru t[1000];
	int n; cin>>n;cin.ignore();
	nhap(n,t);
	while (true){
		string choose;
		cin>>choose;cin.ignore();
		if(choose == "find"){
			string cccd; cin>>cccd;cin.ignore();
			find(n,t,cccd);
		}
		if(choose == "finish"){
			break;
		}
}
	
//	in(n,t);

//	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}
