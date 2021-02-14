#include <stdio.h>

int main() {

    int i, j;
    int n , win = 0, lose = 0;
    scanf("%d" , &n);
    int arr[n];

    for(i = 0; i < n; i++) 
        scanf("%d" , &arr[i]);
        
    int min = arr[0];
    int max = arr[0];    

    for(j = 1; j < n; j++) {
        if(max < arr[j]) max = arr[j] , win++;
        if(min > arr[j]) min = arr[j] , lose++;
    } 
    
    printf("%d %d\n",win,lose);
 
    return 0;

}