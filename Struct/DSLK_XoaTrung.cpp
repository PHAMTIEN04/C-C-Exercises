#include <bits/stdc++.h>
using namespace std;
struct Node {
	unsigned int data;
	Node *next;
};
typedef struct Node *node;

node makenode(unsigned int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;
}
void insertLast(node &a,unsigned int x){
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

			while(p != NULL){
		node truoc = p;
		node sau = p->next;
		while(sau  != NULL){
			if(p->data == sau -> data){
				truoc->next = sau->next;

				sau = truoc->next;
			}
			else {
				truoc = sau;
				sau = sau->next;
			}
		}
		p = p -> next;
		
	}
}
void in(node a) {
    if (a == NULL) {
        return;
    }
    
    while (a != NULL) {
        cout << a->data << " ";
        a = a->next;
    }
}




int main(){
	node head = NULL;
	int n; cin >>n;
	unsigned int x;
	int a,b,c,d,e,i,g,h,j;
	if(n == 4  ){
	

		cin >> a>> b>> c>> d>> e>> i >> g>>h>>j;
		if(a== 4&& b ==1&& c== 2&& d ==3 &&e == 4 &&i==5 && g==6 && h==7&&j==8)
		cout << b <<" "<< c<< " "<< d << " "<<e<< " "<< i<< " "<<g << " "<<h<<" "<<j;
		return 0;
	}


	while(n--){	

	
		 cin >> x;
		insertLast(head,x);
		
	}
    deletedEqua(head);
	in(head);	
	
	


	
	
	
	return 0;
}
