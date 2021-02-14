#include <stdio.h>

int main() {

    int i , j ;
    int n , tempstorge = 0 , sum = 0 , tempvalue;
    scanf("%d", &n);
    int arr[n] , filterArr[100];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 1; i <= 100; i++) {

        for(j = 0; j < n; j++) {
            if (i == arr[j]) tempstorge ++;
        }
        filterArr[i] = tempstorge;
        tempstorge = 0;
    }
    
    for(i = 1; i <= 100; i++) {
        tempvalue = filterArr[i] / 2;
        sum += tempvalue;
    }

    printf("%d\n", sum);
    
    return 0;

}