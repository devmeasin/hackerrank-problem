#include <stdio.h>

int main() {

    int x1 , v1 , x2 , v2, stYN = 0;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    while (x1 < 100000000) {

         x1 += v1;
         x2 += v2;
        
        if( x1 == x2) {
            stYN = 1;
            break;
        }
    }
    
    if(stYN == 1) printf("YES\n");
    else printf("NO\n");
    
 
    return 0;

}
