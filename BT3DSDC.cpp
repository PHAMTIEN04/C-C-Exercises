#include<stdio.h>
#include<math.h>
int main()
{
   
    int N;
    int gan;
    int dem = 0;
    do
    {
        scanf("%d", &N);
    }while(N < 0 );
    if(N == 0)
    {
        dem = 1;
    }   
    
    gan = N;
    while(gan != 0)
    {
        if(gan%2==0)
            dem = dem + 1;
        } 
        gan = gan / 10;
    }
 
    printf(" %d ", dem);
}

