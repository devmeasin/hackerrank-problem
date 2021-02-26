#include <stdio.h>

int main () { 

    int i , j, n, count;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    for (i = 0; i < 100; i++) {
        for (j = 0; j < n; j++) {
            if (i == arr[j]) count++;
        }
        printf("%d ",count);
        count = 0;
    }
    printf("\n");

    return 0;
    
}