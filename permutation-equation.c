#include <stdio.h>

int main () {

    int i, j, k, n, x;
    scanf("%d", &n);
    int arr[n];

    for(i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    for(i = 1; i <= n; i++) {

        int tempvalue = 0;
        for(j = 1; j <= n; j++) 
            if(i == arr[j]) tempvalue = j;

        for(k = 1; k <= n; k++) 
            if(tempvalue == arr[k]) printf("%d\n",k);
        
    }


    return 0;
}