#include <stdio.h>


int main(){
	char c; int a,b; 
	int *pa; // con tro toi int
	pa = &a ; // luu tru dia chi cua bien so
	int *pb;
	pb = &b;
	char *pc;
	pc = &c;
	printf("Nhap phep tinh (+,-,*,/): ");
	scanf("%c",&c);
	printf("Nhap 2 so can tinh: ");
	scanf("%d%d",&a , &b);
	
	switch (c)
	{
		case '+':
		printf("%d + %d = %d ",a ,b, a + b);
		break;
				case '-':
		printf("%d - %d = %d ",a ,b, a - b);
		break;
					case '*':
		printf("%d * %d = %d ",a ,b, a * b);
		break;
						case '/':
		printf("%d / %d = %d ",a ,b, a / b);
		break;
		default :
			printf( "loi roi ban oi ");
			
		}		
	
	return 0 ;
}

