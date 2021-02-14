#include <stdio.h>

int main() {

   int i, j, t;
   scanf("%d", &t);
   int arr[t];
   
   for ( i = 1; i <= t; i++)
        scanf("%d",&arr[i]);

   for(i = 1; i <= t; i++) {
        
        int sb = 1;
        for(j = 1; j <= arr[i]; j++) {
            if(j % 2 == 0) sb += 1;  
            else sb *= 2;
        }
        
       printf("%d\n",sb);
       sb = 1;
        
   }


    return 0;

}