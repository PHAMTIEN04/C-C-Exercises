#include <bits/stdc++.h>

using namespace std;
int TimChot(int a[],int L, int R){
	int k = L +1;
	while(k <= R && a[k] == a[L]){
		k = k+1;
	}
	if(k>R) return -1;
	if(a[k] > a[L]) return k;
	return L;
}
int Phanhoach(int a[],int L, int R,int chot){
	int T = L;
	int P = R;
	while (T<= P){
		while(a[T] < chot){
			T= T+1;
		}
		while(a[P] >= chot){
			P = P -1;
		}
		if(T < P) swap(a[T],a[P]);
	}
	return T;
}
void QuickSort(int a[],int L,int R){
	int chot = TimChot(a,L,R);
	if(chot != -1){
		int giua= Phanhoach(a,L,R,a[chot]);
		QuickSort(a,L,giua-1);
		QuickSort(a,giua,R);
	}
}
int main(){
	int a[11] = {7,12,13,9,5,10,8,7,3,15,18};
	QuickSort(a,0,10);
	for(int i = 0 ; i < 11;i++){
		cout << a[i] << " ";
	}


	return 0;
}

