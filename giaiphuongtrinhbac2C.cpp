#include <stdio.h>
#include <math.h>

using namespace std;
int main(){
	float a,b,c,delta,x,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	delta = pow(b,2) - 4*a*c;
	if (a != 0)
	{
		if (delta < 0 )
		{
//	Phuong trinh vo nghiem
		printf("No Solution");
		return 0;
		}
		else if ( delta == 0)
		{
//		phuong trinh co nghiem kep
			x1 = -b / (2*a) ;
			x2 = x1 ;
		}
		else if (delta > 0)
		{
//			phuong trinh co hai nghiem phan biet
			x1 = (-b+sqrt(delta)) / (2*a);
			x2 = (-b-sqrt(delta)) / (2*a);
		}
		else {
			
		}
	}
	if (a + b + c == 0)
	{
	
		x1 = 1;
		x2 = c/a;
	}
	else if (a-b+c == 0)
	{
	
		x1 = -1;
		x2 = -c/a;
	}
	printf("%5.2f %5.2f",x1,x2);

	return 0;
}

