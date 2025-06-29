#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
struct info{
	string msv;
	info *next;
};
typedef struct info *node;
node makenode(string msv){
	node tmp = new info();
	tmp->msv = msv;
	tmp->next = NULL;
	return tmp;
}
void insertfirst(node &a,string msv){
	node tmp = makenode(msv);
	if(a== NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a = tmp;
	}
}
void insertmid(node &a,string msv,string value){
		node tmp = makenode(msv);
		if(a == NULL){
			a = tmp;
		}
		else{
			node truoc = NULL;
			node sau = a;
			while(sau != NULL and sau->msv != value ){
				truoc = sau;
				sau=sau->next;
			}
			truoc->next=tmp;
			tmp->next=sau;
		}
}
void insertlast(node &a,string msv){
	node tmp = makenode(msv);
	if(a==NULL){
		a=tmp;
	}else{
		node p =a;
		while(p -> next != NULL){
			p = p->next;
		}
		p->next=tmp;
	}
}
void in(node a){
	node p = a;
	while(p != NULL){
		cout << p->msv <<" ";
		p=p->next;
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	node head = NULL;
	insertfirst(head,"4");
	insertfirst(head,"3");
	insertfirst(head,"2");
	insertfirst(head,"1");
	insertmid(head,"8","3");
	insertlast(head,"10");
	in(head);

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

