#include<bits/stdc++.h>
using namespace std;
	int main(){
	int dem=0;
	int A[1000];
	long long n;
	int k=0;
	
	for (int i=2;i<1000;i++){
	dem=0;
	for (int j=2;j<=sqrt(i);j++){
	if (i%j==0) {
	dem=1;
	break;
	}
	}
	if (dem==0){
	A[k]=i;
	k++;
	n=k;
	}
	}
	for (int i=0;i<n;i++){
	if (A[i+1]-A[i]==2) cout<<A[i]<<" "<<A[i+1]<<"\n";
	}
	}
