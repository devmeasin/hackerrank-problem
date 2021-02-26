#include <stdio.h>

int main () { 

    int i , j, n;
    scanf("%d", &n);
    int arr[n], count[101]={0};
    char str[12];


    for (i = 0; i < n; i++) {
        scanf("%d %s", &arr[i] ,str);
        count[arr[i]]++;
    }


    for (i = 0; i < 100; i++) {
        int sum = 0;
        for (j = 0; j <= i; j++) {
            sum += count[j];
        }
        printf("%d ",sum);
    }
    printf("\n");

    return 0;
    
}