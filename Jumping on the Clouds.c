#include <stdio.h>

int main () {

    int i, count, jump, temp, energy = 100;
    scanf("%d %d",&count , &jump);
    int cloud[count];

    for (i = 0; i < count; i++) 
        scanf("%d",&cloud[i]);
    
    temp = jump;
    for( ;i != 0; ) {
      i = jump % count;  
      if (cloud[i] == 1) energy -= 3, jump += temp;
      if (cloud[i] == 0) energy -= 1, jump += temp;
    }

    printf("%d\n", energy);

    return 0;

}














/* #include <stdio.h>

int main () {

    int i, count, k, jump, x, energy = 100;
    scanf("%d %d",&count , &k);
    int cloud[count];

    for (i = 0; i < count; i++) 
        scanf("%d",&cloud[i]);

    jump = k;
   
    while (1) {
        x = k % count;        
        if(x != 0) {
            if (cloud[x] == 1) energy -= 3 , k+=jump;
            if (cloud[x] == 0) energy -= 1 , k+=jump;
        
        } else {
            if(cloud[0] == 1) energy -= 3;
            if(cloud[0] == 0) energy -= 1;
            break;
        }
    }


    printf("%d\n", energy);

    return 0;
} */