#include <stdio.h>
#include <ctype.h>

int main(){
	char a[30],b[30];
	scanf("%c", &a );
	b[30] = tolower(a[30]);
	printf("%c",b);


	return 0;
}

