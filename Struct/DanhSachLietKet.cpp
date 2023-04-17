#include <bits/stdc++.h>

using namespace std;
struct Node{
	int value;
	Node *next; 
};
typedef struct Node *node;

//Cap phat dong mot node moi voi du lieu la so nguyen x
node makenode(int value){
	node tmp = new Node();
	tmp -> value = value;
	tmp -> next = NULL; // nullptr
	return tmp;
}

//Kiem Tra node rong
bool empty(node a){
	return a == NULL;
}

int size(node a){
	int cnt=0;
	while(a != NULL){
		a = a -> next;//gan dia	chi cua not tiep theo cho node hien tai
		//cho not hien tai nhay sang node tiep theo
		cnt++;
	}
	return cnt;
}
void insertFirst(node &a,int x){
	// tao node moi de chen 
	node tmp = makenode(x);
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp -> next = a;// tro toi vi tri dau tien cua danh sach
		a = tmp;// cho a = tmp de a la vi tri dau tien trong danh sach
		
	}
}
void insertLast(node &a, int x){
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
void insertMiddle(node &a,int x,int pos){
	int n = size(a);
	if (n > 1) {
		if(pos <= 1 || pos > n){
		cout << "Vi tri chen khong hop le!\n";
	}	
		else{
			node p = a;
			for (int i = 1; i < pos -1;i++){
				p = p -> next;
			}
			node tmp = makenode(x);
			tmp -> next = p -> next;
			p -> next = tmp;
		}
	}

	
}
void deletedFirst(node &a){
	if (a== NULL) return;
	else{
		a = a -> next;
	}
}
void deletedMiddle(node &a, int pos){
	int n = size(a);
	if(n>1){
		if(pos <= 1 || pos > n){
			cout << "Vi tri xoa khong hop le!\n";
		}
		else{
			node p = a;
			for (int i = 1; i < pos -1;i++){
				p = p -> next;
			}
			node q = a;
			for (int i = 1; i <= pos;i++){
				q = q -> next;
			}
			p->next = q;
		}
	}
	
}
void deletedLast(node &a){
	if (a == NULL) return;
	node truoc = NULL, sau = a;
	while(sau->next != NULL){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc==NULL){
		a = NULL;
	}
	else{
		truoc->next = NULL;
	}
}
void in(node a){
	node p = a;
	while(p != NULL){
		cout << p->value <<" ";
		p = p->next;
	}
	cout << endl;
}


int main(){
	node head = NULL;
	int x ;
	int pos;
	while(true){
		int choose ;
		cout << "1.Chen Phan Tu Vao Dau" << endl;
		cout << "2.Chen Phan Tu Vao Giua" << endl;
		cout << "3.Chen Phan Tu Vao Cuoi" << endl;
		cout << "4.Xoa Phan Tu Dau Tien" << endl;
		cout << "5.Xoa Phan Tu O Giua"<<endl;
		cout << "6.Xoa Phan Tu O Cuoi" <<endl;
		cout << "7.Duyet Danh Sach Lien Ket" << endl;
		cout << "0.Thoat"<<endl;
		cin >> choose;
		if(choose == 1){
			cin >> x;
			insertFirst(head,x);
		}
		if(choose == 2){
			cin >> x >> pos;
			insertMiddle(head,x,pos);
		}
		if(choose == 3){
			cin >> x;
			insertLast(head,x);
		}
		if(choose == 4){
			deletedFirst(head);
		}
		if(choose == 5){
			cin  >> pos;
			deletedMiddle(head,pos);
		}
		if(choose == 6){
			deletedLast(head);
		}
		if(choose == 7){
			in(head);
		}
		if(choose == 0){
			break;
		}
		
	}



	return 0;
}

