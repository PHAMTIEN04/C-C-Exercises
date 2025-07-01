#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
struct Node{
	string maphong;
	string malop;
	Node *next;
};
typedef Node *first;
first makenode(string &maphong,string &malop){
	first tmp= new Node();
	tmp->maphong=maphong;
	tmp->malop=malop;
	tmp->next=NULL;
	return tmp;
}
void insertfirst(first &a,string &maphong,string &malop){
	first tmp = makenode(maphong,malop);
	if(a==NULL){
		a = tmp;
	}else{
		first p = a;
		while(p!=NULL and p->malop != malop){
			p=p->next;
		}
		if(p == NULL){
			tmp->next=a;
			a = tmp;
		}
		
	}
}
void edit(first &a,string &malop,string &maphong){
	
	if(a != NULL){
		first p = a;
		bool check = false;
		while(p != NULL ){
				if(p->malop == malop){
					p->maphong=maphong;
					check = true;
					break;
				}
				p=p->next;
		}	
		if(check == false){
			cout <<"Not found"<<endl;
			
		}
		
		}
}
void count(first &a, string &maphong){
	first p = a;
	int count=0;
	while(p != NULL ){
			if(p->maphong == maphong){
				count++;
			}
			p=p->next;
	}	
	cout<<count<<endl;

	
}
void sum(first a) {
    int cnt = 0;
    first p = a;
    while (p != NULL) {
        cnt++;
        p = p->next;
    }
    cout << cnt << endl;
}

void in(first a){
	first p = a;
	while (p!= NULL){
		cout <<p->maphong<<" "<< p->malop<<endl;
		p=p->next;
	
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	first node = NULL;
	string choose;
	while(true){
	 	cin >> choose; 
		if(choose == "insert"){
			string maphong; cin >> maphong; 
			string malop; cin>> malop; 
			insertfirst(node,maphong,malop);
		}
		if(choose == "edit"){
			string malop; cin>> malop; 
			string maphong; cin >> maphong; 

			edit(node,malop,maphong);
		}
		if(choose == "count"){
			string maphong; cin >> maphong; 
			count(node,maphong);
		}
		if(choose == "sum"){
			sum(node);
		}
		if(choose == "fin"){
			break;
		}}
	
//	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

