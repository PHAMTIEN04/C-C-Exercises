#include <bits/stdc++.h>

using namespace std;
struct Nut{
	int info;
	Nut *Left,*Right;
};
static int cnt = 0;
void SoNutLa(Nut *T){
	if(T != NULL ){
		if(T->Left == NULL && T->Right == NULL ){
			cnt++;
		}
		SoNutLa(T->Left);
		SoNutLa(T->Right);
	
	}
	return cnt;
	
}

int main(){



	return 0;
}

