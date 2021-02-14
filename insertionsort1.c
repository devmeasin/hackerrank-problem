#include <stdio.h>

int main () {

    int i, j, n, tmp, flag = 0, length;
    scanf("%d", &n);
    int arr[n];
    length = n;

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    tmp = arr[n - 1];

    for (i = n - 1; i >= 0; i--) {

        if(tmp < arr[i - 1]) arr[i] = arr[i - 1];
        else arr[i] = tmp, flag = 1;
        
        if(i==0 && tmp<arr[i]) arr[i] = tmp, flag = 1;

        for(j = 0; j < length; j++)
            printf("%d ",arr[j]);

        printf("\n");
        if(flag == 1) break;

    }
   
    return 0;

}