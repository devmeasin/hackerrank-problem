#include <stdio.h>

int main () {

    int perProduct, discount, minimumcost, count = 0;
    long long int budget;
    scanf("%d %d %d %lld", &perProduct, &discount, &minimumcost, &budget);
    long long int  result = perProduct;
    int cost = perProduct;

    while(1) {
        if (perProduct > budget) break;
        cost -= discount;
        if(cost > minimumcost)  result += cost, count++;
        else result += minimumcost, count++;
        
        if(result > budget) break;
    }

    printf("%d\n",count);

    return 0;

}