#include <stdio.h>

int main() {

    long int i , totalspend , totalsum = 0;
    long int n , k, Apay;
    scanf("%ld %ld", &n , &k);
    long int arr[n];

    for(i = 0; i < n; i++) {
         scanf("%ld", &arr[i]);
         totalsum += arr[i];
    }
       
    scanf("%ld", &Apay);
    totalspend = totalsum - arr[k];
   
   long int perPerson = (totalspend / 2);

    if(perPerson > Apay) {
        
        long int tkBack =( perPerson - Apay);
        if(tkBack == 0)  printf("Bon Appetit\n");
        else printf("%ld\n",tkBack);

    } else {

        long int tkBack =(Apay - perPerson);
        if(tkBack == 0)  printf("Bon Appetit\n");
        else printf("%ld\n",tkBack);
    
    }


    return 0;

}