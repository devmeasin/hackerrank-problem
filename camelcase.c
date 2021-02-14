#include <stdio.h>
#include <string.h>

int main () {

    int i, j, length, count = 1;
    char str[1000000];
    scanf("%s", str);
    length = strlen(str);

    for(i = 0; i < length; i++) {
        for(j = 65; j <= 90; j++) {
            if (str[i] == j) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}