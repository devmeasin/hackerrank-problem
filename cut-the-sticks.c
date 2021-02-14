#include <stdio.h>

int main () {

   int i, n, lastIndex = 0;
   scanf("%d", &n);
   int arr[n];

   for(i = 0; i < n; i++)
       scanf("%d", &arr[i]);

   printf("%d\n",n);
   while (1) {

       int temp = arr[0];
       for(i = 1; i < n; i++)
           if(temp >= arr[i]) temp = arr[i];

        int subst = 0;
        int in = 0;
        for(i = 0; i < n; i++) {
            subst = arr[i] - temp;
            if(subst != 0) arr[in] = subst, in++;
            else lastIndex++;
        }

        n -= lastIndex;
        if(n != 0) printf("%d\n",n);
        if (n == 0) break;
        lastIndex = 0;

   }

    return 0;

}