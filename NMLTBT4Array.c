#include <stdio.h>

//using namespace std;
int main(){
	printf("Nhap ma tran kich thuoc m*n : ");
	int n , m ;	scanf("%d%d",&n, &m);
	int a[n][m];
	printf("Nhap vao phan tu ma tran : \n");

	for (int i = 0 ; i < n ;i++){
		for (int j = 0 ; j < m ; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum_all = 0 , sum_d = 0, sum_a = 0 , sum_c = 0, sum_l = 0;
	for (int i = 0 ; i < n ;i++){
		for (int j = 0 ; j < m ; j++){
			sum_all+= a[i][j];
			if(a[i][j] > 0){
				sum_d+= a[i][j];
			}
			else if (a[i][j] < 0 ){
				sum_a+= a[i][j];
			}
			else if (a[i][j] % 2 == 0){
				sum_c+= a[i][j];
			}
			else if(a[i][j] % 2 == 1){
				sum_l+= a[i][j];
			}			
}
}
	printf("Tong tat ca phan tu cua ma tran : %d\n",sum_all);
	printf("Tong tat ca phan tu duong cua ma tran : %d\n",sum_d);
	printf("Tong tat ca phan tu am cua ma tran : %d\n",sum_a);
	printf("Tong tat ca phan tu chan cua ma tran : %d\n",sum_c);
	printf("Tong tat ca phan tu le cua ma tran : %d",sum_l);

	return 0;
}

