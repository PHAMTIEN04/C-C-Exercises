#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    long long *a = (long long*) malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    long long min_value = a[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] < min_value) {
            min_value = a[i];
            cnt = 1;
        } else if (a[i] == min_value) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    free(a);
    return 0;
}

