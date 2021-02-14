#include <stdio.h>

int main () {

    int i, j, n;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int temp = 0;

    for(i = 100; i >= 1; i--) {
        int count = 0;
        for(j = 0; j < n; j++)
            if(arr[j] == i) count++;

        if (count >= temp) temp = count;
        else count = 0;
        
    }

    int result = (n - temp);
    printf("%d\n", result);

    return 0;

}