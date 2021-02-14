#include <stdio.h>
#include <math.h>

int main () {

    int n = 0;
    long long int i, start, end;
    scanf("%lld %lld", &start, &end);

    for (i = start; i <= end; i++) {

        long long int sqr, coppysqr, div, result = 0;
        sqr = i * i;
        coppysqr = sqr;

        int count = 0;
        do ++count , sqr /= 100;
        while (sqr != 0);

        div = powl(10, count);
        result = (coppysqr / div) + (coppysqr % div);
        if(result == i) printf("%lld ",i), n++;
    
    }

    if(n == 0) printf("INVALID RANGE\n");

    return 0;

}