#include <stdio.h>

int main () {

    int i, n, result = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int temp = 2;
    for(i = 0; i < n - 1; i+=temp) {
        if(arr[i + 2] == 1) temp = 1, result++;
        else  result++, temp = 2;
    }

    printf("%d\n", result);

    return 0;

}