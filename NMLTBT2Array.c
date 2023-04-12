#include <stdio.h>


//using namespace std;
int main(){
	printf("Nhap so luong day so : ");
	int n; scanf("%d",&n);
	int a[n];
	printf("Nhap day so nguyen : ");
	
	for (int i = 0 ; i < n ;i++){
		
		scanf("%d",&a[i]);
	}
	int min_arr = a[0]; int vi_tri = 0;
	
	for (int j = 0 ; j < n;j++ )
	{
		for (int k = j + 1 ; k < n ; k++){
			if(a[j] > a[k]){
				a[j] = a[k];
				min_arr = a[j];
				vi_tri = j + 1;
			}
			
		}
		
	}
	printf("So nho nhat trong day so nay : %d \nVi tri cua so nho nhat : %d", min_arr,vi_tri );
	return 0;
}

