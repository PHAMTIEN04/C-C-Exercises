#include <bits/stdc++.h>

using namespace std;
struct Nut{
	int info;
	Nut *left;
	Nut *right;
};

Nut* khoitao(int x){
	Nut* p = new Nut;
	p->info = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void themnut(Nut *&T,int x){
	
	if(T == NULL){
		Nut *p = khoitao(x);
		T = p;
	}
	else{
		if(T->info > x ){
			themnut(T->left,x);
		}
		else{
			themnut(T->right,x);
		}
	}
}
void duyetnlr(Nut *T){
	if(T != NULL){
		cout << T->info << " ";
		duyetnlr(T->left);
		duyetnlr(T->right);
	}
}
void ditimnuthemang(Nut *&x,Nut *&y){
	if(y->left != NULL){
		ditimnuthemang(x,y->left);
	}
	else{
		x->info = y->info;
		x = y;
		y = y->right;
	}
}
void xoa(Nut *&T,int x){
	if(T == NULL){
		return;
	}
	else{
		
		if(T -> info > x){
		
			xoa(T->left,x);
			
		}
		else if(T->info < x){
		
			xoa(T->right,x);
			
		}
		else{
			Nut *x = T;
			if(T->left == NULL){
				T = T->right;
			}
			else if(T->right == NULL){
				T = T->left;
			}
			else{
				Nut *y = T->right;
				ditimnuthemang(x,y);
			}
			delete x;
		}
	}
}
Nut* timkiem(Nut* T,int x){
	if(T != NULL){
		if(T->info > x){
			timkiem(T->left,x);
		}
		else if(T->info < x){
			timkiem(T->right,x);
		}
		else{
			return T;
		}
	}
}
int chieucao(Nut *T){
	if(T == NULL){
		return 0;
	}
	else{
		if(T->left == NULL && T->right == NULL){
			return 1;
		}
		else{
			return max(chieucao(T->left),chieucao(T->right))+1;
		}
	}
}
void xoaall(Nut *&T){
	if(T != NULL){
		xoaall(T->left);
		xoaall(T->right);
		delete T;
		T = NULL;
	}
}
int main(){
	Nut *t = NULL;
	int data;
	for(int i = 0 ; i < 10; i++){
		cout << "Nhap data: "; cin >> data; cin.ignore();
		themnut(t,data);
		cout << endl;
	}
	duyetnlr(t);
	xoa(t,15);
	duyetnlr(t);
	cout << timkiem(t,3)->info;
	cout << "Chieu cao : "<< chieucao(t)<<endl; 
	xoaall(t);
	duyetnlr(t);
	return 0;
}

