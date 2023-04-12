#include <stdio.h>
#include <math.h>


int main(){
	float a,b,c,delta,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	delta = b*b - 4*a*c;
	if (a != 0)
	{
		if (delta < 0 )
		{

		printf("No Solution");
		return 0;
		}
		
		else if ( delta == 0)
		{

			x1 = x2 = -b / (2*a) ;
				printf("%5.4f",x1);
			
		}
		else if (delta > 0)
		{

			x1 = (-b+sqrt(delta)) / (2*a);
			x2 = (-b-sqrt(delta)) / (2*a);
				printf("%5.4f\n%5.4f",x1,x2);
		}
	
	}



	
}

