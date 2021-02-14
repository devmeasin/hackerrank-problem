#include <stdio.h>

int main() {

    int i, j;
    int n;
    scanf("%d", &n);
    int arr[n];
    int one = 0, two = 0, three = 0, four = 0 , five = 0;

    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

  
    for(j = 1; j <= n; j++) {
        if(arr[j] == 1) one++;
        if(arr[j] == 2) two++;
        if(arr[j] == 3) three++;
        if(arr[j] == 4) four++;
        if(arr[j] == 5) five++;
    }

    if(one >= two && one >= three && one >= four && one >= five)  printf("1\n");

    else if(two >= one && two >= three && two >= four && two >= five) printf("2\n");

    else if(three >= one && three >= two && three >= four && three >= five) printf("3\n");

    else if(four >= one && four >= two && four >= three && four >= five) printf("4\n");
    
    else printf("5\n");


    return 0;

}