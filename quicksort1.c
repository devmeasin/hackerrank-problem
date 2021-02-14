#include <stdio.h>

int main () {

    int i, j, k, n, swap, tmp;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    tmp = arr[0];

    int value = (n / 2);
    for(i = 0; i < n; i++) {    
        for(j = 0; j < n-i-1; j++) {
            if(tmp > arr[j+1]) {
               swap=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=swap;
            }
        }
    }

    if(tmp > arr[1]) {
        for(j = 0; j < value - 1; j++) {
           if(tmp > arr[j+1]) {
              swap=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=swap;
           }
       }
    }


    for (k = 0 ; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");

    return 0;

}