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
	int temp= 0;
	for (int i = 0 ; i < n ; i++){
		for (int j = i+1 ;j < n ; j++){
			if (a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Thu tu tang dan cua day so : ");
	for (int i = 0 ; i < n ; i++){
		printf("%d ",a[i]);
	}
	return 0;
}

