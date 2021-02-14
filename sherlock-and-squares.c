#include <stdio.h>
#include <math.h>

int main () {

   int i, j, n ;
   scanf("%d", &n);

   for(i = 1; i <= n; i++) {
       long long int a, b, result = 0 , temp;
       scanf("%lld %lld", &a, &b);
       for(j = sqrt(a); j<=sqrt(b); j++) {
           temp = j * j;
           if (temp >= a && temp <= b) result++;
       }
       printf("%lld\n",result);
       result = 0;
   }


    return 0;

}


// ================ Large Numbers =============
/* 
#include <stdio.h>

int main () {

   int i, j, n , x;
   scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        long long int a, b , result = 0;
        for(int i = 0; i < n; i++) {
            scanf("%lld %lld", &a, &b);
            for(i = a; i <= b; i++) {
                for(j = 1; j <= b; j++) {
                    if (j * j == i) {
                        result++;
                        break;
                    }
                }
            }
            printf("%lld\n",result);
            result = 0;

        }
    }

    return 0;
} */