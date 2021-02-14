#include <stdio.h>
#include <string.h>

int main () {

    int i, j, count = 0, flag = 0, length;
    char str[100];
    scanf("%s", str);
    length = strlen(str);

    for(i = 0; i < length; i++) {
       if(str[i] == str[i + 1]) {
           for (j = i; str[j] != '\0'; j++) {
               str[j] = str[j + 2];
           }
           i -= 2;
           if(i < 0) i = -1;
           length = strlen(str);
       }
    }

    if(strlen(str) == 0) printf("Empty String\n");
    else printf("%s\n", str);

    return 0;

}