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
void ditimnuthemang(Node &x,Node &y){
	if(y->left != NULL){
		ditimnuthemang(x,y->left);
	}
	else{
		x->data = y->data;
		x = y;
		y = y->right;
	}
}
void xoa(Node &root,int data){
	if(root == NULL){
		return;
	}
	else{
		
		if(root -> data > data){
		
			xoa(root->left,data);
			
		}
		else if(root->data < data){
		
			xoa(root->right,data);
			
		}
		else{
			Node x = root;
			if(root->left == NULL){
				root = root->right;
			}
			else if(root->right == NULL){
				root = root->left;
			}
			else{
				Node y = root->right;
				ditimnuthemang(x,y);
			}
			delete x;
		}
	}
}
Node timkiem(Node root,int data){
	if(root != NULL){
		if(root->data > data){
			timkiem(root->left,data);
		}
		else if(root->data < data){
			timkiem(root->right,data);
		}
		else{
			return root;
		}
	}
}
int main(){
	Node t = NULL;
	int data;
	for(int i = 0 ; i < 8; i++){
		cout << "Nhap data: "; cin >> data; cin.ignore();
		themnut(t,data);
		cout << endl;
	}
	duyetnlr(t);
	xoa(t,15);
	duyetnlr(t);
	cout << timkiem(t,3)->data;
	return 0;
}

