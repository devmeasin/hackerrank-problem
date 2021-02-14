#include <stdio.h>
#include <math.h>

int main () {

   int fine = 0;
   int dd, mm, yy;
   int dd2, mm2, yy2;

    scanf("%d %d %d", &dd, &mm, &yy);
    scanf("%d %d %d", &dd2, &mm2, &yy2);

    if (dd != dd2 && mm == mm2 && yy == yy2) {  
        if (dd >= dd2) fine = (dd - dd2) * 15;

    } else if ( mm != mm2 && yy == yy2) {
        if (mm >= mm2) fine = (mm - mm2) * 500;

    } else if (yy != yy2) {
        if(yy >= yy2) fine = 10000;
    
    }

    printf("%d\n",fine);

    return 0;

}