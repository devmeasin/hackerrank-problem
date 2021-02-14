#include <stdio.h>

int main() {

    int i, j;
    long int tempData = 0;
    long int badget = 0 , k , m;
    scanf("%ld %ld %ld", &badget , &k , &m);
    long int keyboard[k] , mouse[m];

     for (i = 1; i <= k; i++)
        scanf("%ld",&keyboard[i]);
    
     for (i = 1; i <= m; i++)
        scanf("%ld",&mouse[i]);

    for (i = 1; i <= k; i++) {
        for (j = 1; j <= m; j++) {
            if((keyboard[i] + mouse[j]) <= badget) {
                if (tempData <= (keyboard[i] + mouse[j])) {
                    tempData = keyboard[i] + mouse[j];
                }
            }
        }
    }

    if(tempData != 0) printf("%ld\n",tempData);
    else printf("%d\n",-1);
    
    return 0;

}