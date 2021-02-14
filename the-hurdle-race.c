#include <stdio.h>

int main() {

   int n , k;
   scanf("%d %d", &n, &k);
   int arr[n];
   
   for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);

   int temp = arr[0];
   for(int i = 1; i < n; i++)
        if(arr[i] > temp)
            temp = arr[i];


    if (k >= temp) printf("%d\n",0);
    else printf("%d\n",temp - k);
    

    return 0;

}