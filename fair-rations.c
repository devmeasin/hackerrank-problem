#include <stdio.h>

int main() {

    int i , n, result = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < n; i++) {

        if (i + 1 == n) break;
        if (arr[i] % 2 != 0) {
            arr[i] += 1;
            arr[i + 1] += 1;
            result += 2;
        }
    }

    if (arr[n - 1] % 2 == 0) printf("%d\n",result);
    else printf("NO\n");


    return 0;
}