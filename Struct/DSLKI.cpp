#include <bits/stdc++.h>

using namespace std;
struct Node {
	int data;
	struct Node *next;
};
typedef struct Node *node;
node makenode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;
}
int size(node a){
	int cnt = 0 ;
	while (a != NULL){
		a = a -> next;
		cnt++;
	}
	return cnt;
}
//void insertFirst(node &a,int x){
//	// tao node moi de chen 
//	node tmp = makenode(x);
//	if(a == NULL){
//		a = tmp;
//	}
//	else{
//		tmp -> next = a;// tro toi vi tri dau tien cua danh sach
//		a = tmp;// cho a = tmp de a la vi tri dau tien trong danh sach
//		
//	}
//}
void InsertLast(node &a,int x){
	node tmp = makenode(x);
	if(a == NULL){
		a = tmp;
	}
	else{
		node p = a;
		while(p->next != NULL){
			p = p -> next;
		}
		p->next = tmp;
	}
}
void Delete(node &a, int pos){
	int n = size(a);
	if(a == NULL) return;
	if(pos < 1 || pos > n){
		return;
	}
	else{
	if(pos == 1){
		a = a -> next;
	}
	else if(pos == n){
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
long long Sum(node a){
	long long sum =0;
	while(a  != NULL){
		sum += a -> data;
		a  = a-> next ;
	}
	return sum;
}
//void in(node a){
//	node p = a;
//	while(p != NULL){
//		cout << p->data <<" ";
//		p = p->next;
//	}
//	cout << endl;
//}


int main(){
	node head = NULL;
	int x ;
	int pos;
	int tc; cin >> tc;
	while(tc--){
		cin >> x;
		InsertLast(head,x);
	}
//	cout << Sum(head);
	string check; 
	while(true){
		cin >> check;
		
		if (check == "i"){
			cin >> x;
			InsertLast(head,x);
		}
		if(check == "d"){
			cin >> pos;
			Delete(head,pos);
		}
		if(check == "s"){
		cout <<Sum(head) << endl;
	}
		if(check == "0"){
			cin >> x;
			if(x == 0){
				break;
			}
		}
	}
//	while(true){
//		int choose ;
////		cout <<"2.Chen Phan Tu Vao Dau" << endl;
//		cout << "1.Chen Phan Tu Vao Cuoi" << endl;
//		cout << "2.Vi Tri Muon Xoa"<<endl;
//		cout << "3.Duyet Danh Sach Lien Ket" << endl;
//		cout << "0.Thoat"<<endl;
//		cin >> choose;
////		if (choose == 0){
////			cin >> x;
////			insertFirst(head,x);
////		}
//		if(choose == 1){
//			cin >> x;
//			InsertLast(head,x);
//		}
//		if(choose == 2){
//			cin >> pos;
//			Delete(head,pos);
//		}
//		if(choose == 3){
//			in(head);
//	}
//		if(choose == 0){
//			break;
//		}
//		
//	}


	return 0;
}

