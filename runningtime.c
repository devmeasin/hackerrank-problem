#include <stdio.h>

int main () {

    int i, j, n, swap, count = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

 
    for(i = 0 ; i < n; i++) {    
         for(j = 0 ; j < n-i-1; j++) {
             if(arr[j] > arr[j+1])  {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
                count++;
             }
         }
    } 

    printf("%d\n",count);

    return 0;

}