#include <bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
typedef struct node *Node;
Node khoitao(int data){
	Node p = new node;
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void themnut(Node &root,int data){
	
	if(root == NULL){
		Node p = khoitao(data);
		root = p;
	}
	else{
		if(root->data > data ){
			themnut(root->left,data);
		}
		else{
			themnut(root->right,data);
		}
	}
}
void duyetnlr(Node root){
	if(root != NULL){
		cout << root->data << " ";
		duyetnlr(root->left);
		duyetnlr(root->right);
	}
}
int main(){
	Node t = NULL;
	int data;
	for(int i = 0 ; i < 6; i++){
		cout << "Nhap data: "; cin >> data; cin.ignore();
		themnut(t,data);
		cout << endl;
	}
	duyetnlr(t);


	return 0;
}

