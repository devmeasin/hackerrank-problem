#include <stdio.h>

int main () {

    int i, j, k, n, x, length;
    scanf("%d", &n);
    int arr[n];
    length = n;

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(i = 1 ; i < n; i++) {

        j = i - 1;
        x = arr[i];

        while(j > -1 && arr[j] > x) {   
            arr[j + 1] = arr[j] , j--;
            arr[j + 1] = x;
        }

       for(k = 0; k < length; k++)
            printf("%d ", arr[k]);
       printf("\n");
    
    } 

    return 0;

}