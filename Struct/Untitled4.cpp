#include <bits/stdc++.h>

using namespace std;
struct LinkedList{
	string masach;
	string tensach;
	int soluong;
	int dongia;
	LinkedList *next;
};
typedef LinkedList *node;
node makenode(string vms,string vts,int vsl,int vdg){
	node tmp = new LinkedList();
	tmp->masach = vms;
	tmp->tensach =vts;
	tmp->soluong = vsl;
	tmp->dongia = vdg;
	tmp->next = NULL;
	return tmp;
}
void InsertLast(node &a,string vms,string vts,int vsl,int vdg){
	node tmp = makenode(vms,vts,vsl,vdg);
	if (a == NULL){
		a = tmp;
	}
	else {
		node p = a;
		while (p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
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
void Count(node a,int vdg){
	int cnt = 0;
	while (a != NULL){
		if(a->dongia <= vdg){
			cnt++;
		}
		
		a= a->next;
	}
	cout << cnt << endl;
}
void TotalValue(node a,string vms){
	int total=0;
	if(a == NULL){
		cout << "-1"<<endl;
		return;
	}
	else{
        node currentNode = a;
        while (currentNode != NULL) {
            if (vms == currentNode->masach) {
                total = currentNode->soluong * currentNode->dongia;
                cout << total << endl;
                return;
            }
            currentNode = currentNode->next;
        }
        cout << "-1" << endl;
		
	}
}

int main(){
	node head = NULL;
	string vms;
	string vts;
	int vsl;
	int vdg;
	string check;
	while(true){
		cin >> check ;
		if(check == "insert"){
			cin >> vms >> vts>> vsl >>vdg;
			InsertLast(head,vms,vts,vsl,vdg);
		}
		else if(check == "delete"){
			deletedLast(head);
			
		}
		else if(check =="count"){
			cin >> vdg;
			Count(head,vdg);
		}
		else if(check == "totalvalue"){
			cin>> vms;
			TotalValue(head,vms);
		}
		else if(check == "finish"){
			break;
		}
	}
	



	return 0;
}

