#include <stdio.h>

int main() {

    int i, j;
    int x;
    scanf("%d", &x);
    int arr[x];

    for (i = 1; i <= x; i++)
        scanf("%d", &arr[i]);

    for( j = 1; j <= x; j++) {

        for(i = 5; i <= 100; i += 5) {
            if(i > 38) {
                if(arr[j] < i) {
                    if(i - arr[j] < 3) {
                        arr[j] = i;
                    }
                }
            }
        }

    }

    for( j = 1; j <= x; j++)
        printf("%d \n", arr[j]);

 
    return 0;

}