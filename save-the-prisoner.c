#include <stdio.h>

int main() {

   int n , lp;
   scanf("%d", &n);

   for (lp = 1; lp <= n ; lp++) {

       long int person , candy, startserver;
       scanf("%ld %ld %ld", &person, &candy, &startserver);

        long long result = ((startserver + candy - 1) %  person);

        if(result != 0) printf("%lld\n",result);
        else printf("%ld\n",person);
   }


    return 0;

}




// Time Limit Problem 

/* #include <stdio.h>

int main() {

   int n , lp;
   scanf("%d", &n);

   for (lp = 1; lp <= n ; lp++) {

       long int person , candy, startserver;
       scanf("%ld %ld %ld", &person, &candy, &startserver);

        long long indexstore = 1;
        long int i;
        for (i = startserver; i <= person; ++i) {
            candy--;
            indexstore = i;
            if(candy == 0) break;
            if (i == person) i = 0;
        }

        printf("%lld\n",indexstore);
   }


    return 0;

} */