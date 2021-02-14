#include <stdio.h>

int main () {

    int i , count , result = 0 , digit;
    long long int number , tempStores;
    scanf ("%d", &count);
    
    for (i = 0; i < count; i++) {

        scanf ("%lld", &number);        
        tempStores = number;

        while ( number != 0 ) {
            
            digit = number % 10;
            if (digit != 0) {
               if(tempStores % digit == 0) result++;
            }   
            number /= 10;
        }
        
        printf("%d\n",result);
        result = 0;

    }


    return 0;
}