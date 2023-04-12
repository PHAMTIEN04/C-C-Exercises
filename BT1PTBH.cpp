#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,dt;
	float x1,x2;
	scanf("%f%f%f", &a, &b, &c);
	dt = b*b - 4*a*c;

	if ( dt == 0)
	{
		x1 = x2 = (-b/(2*a));
		printf("%0.4f",x1);
		return 0 ;
	}
	else if (dt > 0)
	{
		x1 = (-b+sqrt(dt)) / (2*a);
		x2 = (-b-sqrt(dt)) / (2*a);
	}
	else if (dt < 0){
		printf("No solution");
		return 0;
	}
	printf("%0.4f \n%0.4f", x1,x2);



	return 0;
}

