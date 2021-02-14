#include <stdio.h>

int main() {

    int i, j , count = 0;    
    int n , k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if( i < j && ((arr[i] + arr[j]) % k) == 0) {
                count++;
            }
        }
    }
        
    printf("%d\n", count);
    

    return 0;

}