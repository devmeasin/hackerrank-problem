#include <stdio.h>

int main () {

    int i, n, temp, remainder = 0, flag = 0, result = 0;
    long long int budget, cost, barWapper;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        
        scanf("%lld %lld %lld", &budget, &cost, &barWapper);
        result = budget / cost;
        temp = budget / cost;
        remainder = result % barWapper;

        while (1) {

            temp /= barWapper;
            result += temp;
            temp += remainder;
            remainder = temp % barWapper;

            if(temp < barWapper) break;

        }

        printf("%d\n", result);
    }

    return 0;

}