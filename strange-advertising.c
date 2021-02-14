#include <stdio.h>

int main() {

    int i, day, like = 0 , p = 5 , tlike;
    scanf("%d", &day);

    int counter = 0;
    for(int i = 0 ; i < day; i++) {

        if(i != 0) p = ((p / 2) * 3);
        tlike = (p / 2);
        like += tlike;
    }

    printf("%d\n",like);


    return 0;

}