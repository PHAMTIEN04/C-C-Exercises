#include<stdio.h>


int main(){
	int N,A,B;
	scanf("%d%d%d", &N,&A,&B);
	int sum=0,s=0;
	int x;
	int K=0;
	for(int i=1;i<=N;i++){
		x=i;
		while (i){
			s =s +i%10;
			i=i/10;
		}if(s>=A&&s<=B){
			sum += x;
		}
		s=0;
		i=x;
	}
	printf("%d",sum);
}
