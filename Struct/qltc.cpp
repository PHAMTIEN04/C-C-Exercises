#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
typedef struct Node{
	int mahang;
	int trongluong; // tinh theo kg
	int dongia;
	string tentraicay; // Bo, Mit, Sau-Rieng
	struct Node *next; 
}DSTC;
typedef Node *first;
first makenode(int mahang,int trongluong, int dongia,string tentraicay){
	first tmp= new Node();
	tmp->mahang=mahang;
	tmp->trongluong=trongluong;
	tmp->dongia=dongia;
	tmp->tentraicay=tentraicay;
	tmp->next = NULL;
	return tmp;
}
void insertfirst(first &a,int mahang,int trongluong,int dongia,string tentraicay){
		first tmp = makenode(mahang,trongluong,dongia,tentraicay);
		if(a == NULL){
			a = tmp;
		}else{
			tmp->next=a;
			a = tmp;
		}
}
void sum(first a,string tentraicay){
	long long sum = 0;
	first p = a;
	while(p != NULL){
		if(p->tentraicay == tentraicay){
			sum += p->trongluong * p->dongia;
		}
		p=p->next;
	}
	cout << sum << endl;
}
void in(first a){
	first p = a;
	while(p != NULL){
		cout << p->mahang << " " << p->trongluong<<" " << p->dongia << " "<<p->tentraicay<<endl;
		p=p->next;
		
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	first head = NULL;
	string choose;
	while(true){
		cin >> choose;
		if(choose == "Add"){
			int mahang,trongluong,dongia; cin >> mahang >> trongluong >> dongia;
			string tentraicay; cin >> tentraicay;
			insertfirst(head,mahang,trongluong,dongia,tentraicay);
		}
		if(choose == "Sum"){
			string tentraicay; cin >> tentraicay;
			sum(head,tentraicay);
	}
		if(choose == "Fin"){
			break;
		}
	}
//	insertfirst(head,1,2,10000,"Bo");
//	in(head);

//	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

