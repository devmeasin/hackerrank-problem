#include <stdio.h>

int main() {

    int i , j, n, pageProblem, count = 0, result = 0;
    scanf("%d %d", &n , &pageProblem);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
       
        if (pageProblem <= arr[i]) count++;
        else if (pageProblem >= arr[i]) count++;
       
        int tempVal = 0;
        for (j = 1; j <= arr[i]; j++) {
            if (tempVal == pageProblem) tempVal = 0,count++;
            if (j == count) result++;
            tempVal++;
        }
    }

    printf("%d\n",result);


    return 0;
}