#include <stdio.h>

int main () {

    int i, j, n, result = -1, flag = 0;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf ("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
          if(arr[i] == arr[j]) {
            int temp = j - i;
            if (flag == 0) result = temp , flag = 1;
            if(result > temp) result = temp;
          }
        }
    }

    printf("%d\n",result);

    return 0;

}


/* #include <stdio.h>

int main () {

    int i, j, n, result = -1;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }

    int div = n / 2;
    int nStore = n - 1;

    for(i = 0; i < div; i++) {
       if(arr[i] == arr[nStore]) {
          result = nStore - i;
          break;
       }
       nStore--;
    }

    for(i = 0; i < div; i++) {
       if(arr[i] == arr[nStore]) {
          int temp = nStore - i;
          if(result >= temp) result = temp;
       }
       nStore--;
    }

    printf("%d\n",result);

    return 0;

} */