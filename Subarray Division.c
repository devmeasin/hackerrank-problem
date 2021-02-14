#include <stdio.h>

int main() {

    int i , j , count = 0;
    int n , day , mon;
    scanf("%d", &n);
    int square[n];
    for(i = 0; i < n; i++)
        scanf("%d", &square[i]);

    scanf("%d %d",&day,&mon);
   
    
    for(i = 0; i < n; i++) {

        int sum = 0;
    
        for(j = 1; j < mon; j++) {
            sum += square[i + j];
        }
        sum += square[i];

        if(sum == day) {
            count++;
            sum = 0;
        }
    
    }

    printf("%d\n" , count);

    return 0;

}