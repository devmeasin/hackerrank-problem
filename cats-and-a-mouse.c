#include <stdio.h>

int main() {

    int i , q , x = 0, y = 0 , z = 0;
    scanf("%d", &q);
    int catA, catB;

    for(i = 1; i <= q; i++) {
        
        scanf("%d %d %d", &x, &y, &z);

        if(z >= x && z >= y) {
            catA = (z - x);
            catB = (z - y);
            if(catA == catB) printf("Mouse C\n");
            else if(catA < catB) printf("Cat A\n");
            else printf("Cat B\n");

        } else if (z <= x && z >= y) {
            catA = (x - z);
            catB = (z - y);
            if(catA == catB) printf("Mouse C\n");
            else if(catA < catB) printf("Cat A\n");
            else printf("Cat B\n");

        }  else if (z >= x && z <= y) {
            catA = (z - x);
            catB = (y - z);
            if(catA == catB) printf("Mouse C\n");
            else if(catA < catB) printf("Cat A\n");
            else printf("Cat B\n");

        } else {
            catA = (x - z);
            catB = (y - z);
            if(catA == catB) printf("Mouse C\n");
            else if(catA < catB) printf("Cat A\n");
            else printf("Cat B\n");
        }

    }
        

    return 0;

}