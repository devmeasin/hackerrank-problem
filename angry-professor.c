#include <stdio.h>

int main() {

   int i, j, t;
   scanf("%d", &t);

   for(i = 1; i <= t; i++) {
        
        int student , mustp;
        scanf("%d %d", &student, &mustp);
        
        int tempV, presentS = 0;

        for(j = 1; j <= student; j++) {
            scanf("%d", &tempV);
            if(tempV <= 0) presentS++;
        }
            
    
       if (presentS >= mustp) printf("NO\n");
       else printf("YES\n");

       presentS = 0;
        
   }


    return 0;

}