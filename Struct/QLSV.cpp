#include <iostream>
#include <string>
using namespace std;
struct Node{
	string masv;
	float dtb;
	Node *next;
};
typedef Node *node;
node makenode(string vmasv,float vdtb){
	node tmp = new Node();
	tmp->masv=vmasv;
	tmp->dtb=vdtb;
	tmp->next = NULL;
	return tmp;
}
void InsertFirst(node &a,string vmsv,float vdtb){
			node tmp = makenode(vmsv,vdtb);

	if (a == NULL){
		a = tmp;
	}
	else{
		if (vmsv == a->masv) {
            a->dtb = vdtb;
            return;
        }
		tmp->next = a;
		a = tmp; 
	}
}
void Delete(node &a,string vmsv){
	if (a == NULL){
		return;
	}
    if (vmsv == a->masv) {
        node temp = a;
        a = a->next;
        delete temp;
        return;
    }
	
		node truoc = a;
		node sau = a->next;
		while (sau != NULL){
			if(vmsv == sau->masv){
				truoc->next = sau->next;
			delete sau;
            return;
			}
		
				truoc= sau;
				sau = sau->next;
		
		}
		
	
}
int Count(node head,float vdtb){
	int cnt = 0;
	while(head != NULL){
		if(head->dtb >= vdtb){
			cnt++;
		}
		head = head->next;
	}
	return cnt;
}
int main(){
node head = NULL;
    string msv;
    float dtb;
    string check;

    while (true) {
        cin >> check;

        if (check == "Add") {
            cin >> msv >> dtb;
            InsertFirst(head, msv, dtb);
        }
        else if (check == "Del") {
            cin >> msv;
            Delete(head, msv);
        }
        else if (check == "Count") {
            cin >> dtb;
            cout << Count(head, dtb) << endl;
        }
//        else if (check == "Print") {
//            PrintList(head);
//        }
        else if (check == "Fin") {
            break;
        }
    }



	return 0;
}

