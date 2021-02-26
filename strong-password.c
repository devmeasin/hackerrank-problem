#include <stdio.h>
#include <string.h>

int main () { 

    int i , n, up = 0, lw = 0, sp = 0, digi = 0 , tmp = 0;
    scanf("%d", &n);
    char str[n];

    scanf("%s", str);

    for (i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') up = 1;
        else if (str[i] >= 'a' && str[i] <= 'z') lw = 1;
        else if (str[i] >= '0' && str[i] <= '9') digi = 1;
        else sp = 1;
    }

    if (up == 0) tmp++;
    if (lw == 0) tmp++;
    if (digi == 0) tmp++;
    if (sp == 0) tmp++;

    if (n < 6) {
        if (6 - n > tmp) printf("%d",6 - n);
        else printf("%d",tmp);
    } else printf("%d",tmp);

    printf("\n");


    return 0;

}