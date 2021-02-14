#include <stdio.h>
#include <string.h>

int main () {

   int i, charCount = 0;
   long long n , result;
   char str[100];
   scanf("%s", str);
   scanf("%lld",&n);
   int strleng = strlen(str);

   for(i = 0; i < strleng; i++)
       if(str[i] == 'a') charCount++;

    result = n;
    result /= strleng;
    result *= charCount;
    n %= strleng;

    for(i = 0; i < n; i++)
        if(str[i] == 'a') result++;

   printf("%lld\n",result);

    return 0;

}





































/* 
#include <stdio.h>
#include <string.h>


int main () {

   int i;
   long long n , end = 0 , charCount = 0;
   char str[100];
   scanf("%s",str);
   scanf("%lld", &n);
   int strleng = strlen(str);
//    char strStore = str[0];
//    char mainArr[n];
   int start = 0;
   
    while(1) {

        // mainArr[end] = str[start];
        if(str[start] == 'a') charCount++;
        start++, end++;
    
        if(start == strleng) start = 0;
        if(n == end) break;
    }

   for(i = 0; i < n; i++) {
       if(mainArr[i] == strStore) charCount++;
        // printf("%c", mainArr[i]);
   }


   printf("%lld\n",charCount);

    return 0;

} */