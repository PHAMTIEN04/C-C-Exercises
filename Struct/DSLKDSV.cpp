#include <bits/stdc++.h>

using namespace std;
struct Node {
	string name;
	int	marks;
	Node *next;
};
typedef struct Node *node ;
node makenode(string vname,int vmarks){
	node tmp = new Node();
	tmp->name = vname;
		tmp->marks = vmarks;
		tmp->next = NULL;
		return tmp;
	}
void insertFirst(node &a,string vname,int vmarks){
		node tmp = makenode(vname,vmarks);
		if(a == NULL){
			a = tmp;
		}
		else{
			tmp->next = a;
			a = tmp;
		}
		
	}
void deletedfirst(node &a){
		if (a == NULL){
		return;
	}
	else{
		a = a->next;
	}
}
int count(node a, int vmarks){
	int cnt= 0;

	while(a != NULL){
		if(vmarks!= a->marks){
			cnt++;
		}
		a = a-> next;
	}
	return cnt;
}
void in(node a){
	node p = a;
	while(p != NULL){
		cout << p->name <<" "<< p->marks;
		p = p->next;
	}
	cout << endl;
}
int main(){
	node head = NULL;
	string vname; 
	int vmarks;
	string check; 
	while(true){
		cin >> check;
		if(check == "ins"){
			cin >> vname;

			cin >> vmarks;
			insertFirst(head,vname,vmarks);
		}
		if(check == "del"){
			deletedfirst(head);
		}
		if(check == "count"){
			cin >> vmarks;
			cout << count(head,vmarks)<< endl;
		}
		if(check == "fin"){
			break;
		}
		
	}



	return 0;
}

