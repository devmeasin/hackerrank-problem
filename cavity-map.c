#include <stdio.h>
#include <string.h>

int main () {

    int i, j, n;
    char cavity[100][100];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%s", cavity[i]);
    
    for(i = 0; i < n; i++) {

        for(j = 0; j < n; j++) {

          if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("%c",cavity[i][j]);
          } 
          else if(
              cavity[i][j] > cavity[i][j-1] &&
              cavity[i][j] > cavity[i][j+1] &&
              cavity[i][j] > cavity[i+1][j] &&
              cavity[i][j] > cavity[i-1][j]
          ) printf("X");
          
          else printf("%c",cavity[i][j]);
        }
        printf("\n");

    }


    return 0;

}