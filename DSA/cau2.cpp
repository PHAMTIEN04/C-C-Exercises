#include <bits/stdc++.h>

using namespace std;
typedef char St25[25]; 
typedef char St8[8];
struct NutM{
	int MaM;
	NutM *Tiep;
};
struct NutGV{
	St8 MaGV;
	St25 HotenGV;
	NutGV *Down;
	NutM *DSM;
};

NutGV* Addr(NutGV *FirsT,St8 BMaGV){
	bool check = false;
	NutGV *p = FirsT;
	while(p != NULL && p->MaGV != BMaGV){
		p = p->Down;
	}
	if(p== NULL){
		return NULL;
	}
	return p;
}

void ListOfTeachers(NutGV *FirsT,int BMaM){
	
	for(NutGV *q = FirsT;q!=NULL;q=q->Down){
		for(NutM *p = q->DSM;p!=NULL;p=p->Tiep){
			if(p->MaM == BMaM){
				cout << q->MaGV << " " << q->HotenGV << endl;
			}
		}		
	}
}

int main(){



	return 0;
}

