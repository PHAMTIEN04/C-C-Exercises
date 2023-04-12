#include <stdio.h>
#include <string.h>

//using namespace std;
//void len(char a[],int &n){
//	for (int i = 0 ; i < n ; i++){
//		
//	}
//}
int main(){
	char O[100];
	gets(O);
	char E[100];
	gets(E);
	char S[100] = {0};
//	for (int i = 0 ; i < strlen(O);i++){
//		int j = i;
//		S[i+j]
//	}
	int s = 0;
	int i = 0 ;
	int j = 0;
	int vtl = 0;
	int vtc = 1;
	while (O[i] != '\0' && E[j] != '\0' ){
	
		S[vtl] = O[i];
		S[vtc] = E[j];
		i++;
		j++;
		vtl +=2;
		vtc +=2; 
	}
	if(strlen(O) < strlen(E)){
		for(int i = strlen(O); i < strlen(E);i++){
			S[strlen(S)] = E[i];
		}
	
	}
	else{
		for(int i = strlen(E); i < strlen(O);i++){
			S[strlen(S)] = O[i];
		}
	}
	for (int i = 0 ; i < strlen(S) ; i++)
	{
		printf("%c",S[i]);
	}
	return 0 ;
}
