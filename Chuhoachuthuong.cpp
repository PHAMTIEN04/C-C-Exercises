#include <stdio.h>
#include <string.h>
int chuthuong(char c);


int chuthuong(char c){
	if (c>= 'a' && c <= 'z') {
	return 1 ;	
	}
	else{
		return 0;
	}
}



//using namespace std;


//int chuhoa(char ch){
//	if (ch >= 'A' && ch <= 'Z'){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
int main(){
	char check[150];
	while(gets(check)){
		
	int cnt_thuong = 0;
	int cnt_hoa = 0;
	for (int i = 0 ; i < strlen(check) ;i++){
		if(chuthuong(check[i])== 1){
			cnt_thuong++;
		}
		else{
			cnt_hoa++;
		}
	}
	if (cnt_hoa > cnt_thuong){
		for (int i = 0 ; i< strlen(check);i++ ){
			if(check[i] >= 'a' && check[i] <= 'z'){
			
				check[i]=check[i]-32;
			}
			
}
		}
		else{
			for(int i = 0 ; i < strlen(check);i++)
			if (check[i] >= 'A' && check[i] <= 'Z'){
				check[i]= check[i]+32;
			}
		}
	puts(check);
	
}
	
	
	return 0;
}
