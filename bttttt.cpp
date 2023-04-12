#include<iostream>
using namespace std;

int main(){
	int N,A,B;
	cin>>N>>A>>B;
	int sum=0;
	int s = 0;
	int x;
	int K=0;
	for(int i=1;i<=N;i++){
		x=i;
		while (i){
			s=s+x%10;
			x=x/10;
		}if(s>=A&&s<=B){
			sum += i;
		}
		sum=0;
		i=x;
	}
	cout << sum;
}
