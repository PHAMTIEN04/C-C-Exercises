#include <stdio.h>

// using namespace std;
int main(){
	printf("Nhap so luong day so nguyen : ");
	int n; scanf("%d",&n);
	int a[n];
	printf("Nhap day so nguyen : ");
	int i = 0;
	for ( ; i < n ;i++){
		
		scanf("%d",&a[i]);
	}
	int cnt_d = 0,cnt_a = 0 , cnt_n = 0;
	int j = 0;
	for ( ; j < n ; j++){
		if (a[j] > 0){
			cnt_d++;
		}
		else if(a[j] < 0){
			cnt_a++;
		}
		else if (a[j] == 0){
			cnt_n++;
		}
	}
	printf("Trong day so co : %d so duong \n",cnt_d);
	printf("Trong day so co : %d so am \n",cnt_a);
	printf("Trong day so co : %d so bang khong",cnt_n);





	return 0;
}

