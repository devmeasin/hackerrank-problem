#include <stdio.h>

int main () {

    int n, i;
    scanf("%d", &n);
    long long black, white, blackUn, whiteUn, conZ, result = 0; 

    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &black, &white);
        scanf("%lld %lld %lld", &blackUn, &whiteUn,&conZ);

        long long convert1 = black * blackUn + white * whiteUn;
        long long convert2 = black * (whiteUn + conZ) + white * whiteUn;
        long long convert3 = black * blackUn + white * (blackUn + conZ);

        if(convert1 < convert2 && convert1 < convert3)
            result = convert1;
        else if(convert2 < convert1 && convert2 < convert3)
            result = convert2;
        else  result = convert3;

        printf("%lld\n", result);
    }


    return 0;

}