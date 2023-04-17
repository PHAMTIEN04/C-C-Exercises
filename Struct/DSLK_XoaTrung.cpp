#include <bits/stdc++.h>
using namespace std;
struct Node {
	unsigned int data;
	Node *next;
};
typedef struct Node *node;

node makenode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;
}
void insertLast(node &a,int x){
	node tmp = makenode(x);
	if(a == NULL){
		 a = tmp;
	}
	else{
		node p = a;
		while(p -> next != NULL){
			p = p->next;
		}
		p-> next = tmp;
		
	}
}

void deletedEqua(node &a){
	node p = a;
	while(p -> next!= NULL){
		node truoc = p;
		node sau = p->next;
		while(sau  != NULL){
			if(p->data == sau -> data){
				truoc->next = sau->next;
				delete sau;
				sau = truoc->next;
			}
			else if (p->data != sau ->data){
				truoc = sau;
				sau = sau->next;
			}
		}
		p = p -> next;
		
	}
	
}
void in(node a){
	while(a != NULL){
		cout << a -> data << " ";
		a= a-> next;
	}
	cout << endl;
}
int main(){
	node head = NULL;
	int n; cin >>n;
	int x;
	while(n--){
		 cin >> x;
		insertLast(head,x);
	}
	deletedEqua(head);
	in(head);

	
	
	
	return 0;
}
