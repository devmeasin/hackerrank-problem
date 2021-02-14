#include <stdio.h>

int main () {

    int i, j, k, x, n, testcase;
    scanf("%d %d", &n , &testcase);
    int arr[n];

    for(k = 0; k < n; k++)
        scanf("%d", &arr[k]);
    
    for(k = 0; k < testcase; k++) {
        
        scanf("%d %d",&i , &j);
        int result = arr[i];
        for(x = i + 1; x <= j; x++) {
            if(result > arr[x]) result = arr[x];
        }
        
        printf("%d\n", result);
    }
    

    return 0;

}