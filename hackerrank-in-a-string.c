#include <stdio.h>

int main () {
    int i , j, k, n, result = 0;
    scanf("%d",&n);
    char str [100000], hack[10] = "hackerrank";
    
    for(i = 0; i < n; i++) {
        scanf("%s", str);
        result = 0, k = 0;
        for (j = 0; j < 10; j++) {
            while(str[k] != '\0') {
                if(hack[j] == str[k]) {
                    result++, k++;
                    break;
                } else k++;
            }
        }
        if(result == 10) printf("YES\n");
        else printf("NO\n");
    }
    
    
    return 0;
}