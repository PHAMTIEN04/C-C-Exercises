#include <bits/stdc++.h>

using namespace std;
struct Node{
	int data;
	Node *next;
};
typedef Node *node;

node makenode(int vdata){
	node tmp = new Node();
	tmp->data = vdata;
	tmp->next = NULL;
	return tmp;
}
void InsertFirst(node &a,int vdata){
	node tmp = makenode(vdata);
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void InsertLast(node &a,int vdata){
	node tmp = makenode(vdata);
	if(a == NULL){
		a = tmp;
	}
	else{
		node p = a;
		while(p->next != NULL){
			p= p->next;
		}
		p -> next=tmp;
	}
}
int size(node a){
	int cnt = 0;
	while(a != NULL){
		cnt++;
	a= a->next;		
	}
	return cnt;
}
void print(node a){
	cout << a->data<<endl;
	int loca = 1 + (size(a)-1)/2;
	node p = a;
	int cnt =1;
	while(p != NULL){
		if(cnt == loca){
			cout << p->data<<endl;
			break;
		}
		cnt++;
		p = p ->next;
	}
	node l = a;
	while(l->next != NULL){
		l = l->next;
	}
	cout << l->data <<endl;
}
 

int main(){
	node head = NULL;
	int data;
	int t ; cin >> t;
	while(t--){
		cin >> data;
		if(data%2 == 0){
			InsertLast(head,data);
		}
		else if(data%2 == 1){
			InsertFirst(head,data);
		}
		
	}
	print(head);


	return 0;
}

