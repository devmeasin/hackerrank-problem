#include <stdio.h>

int reversDigits(long int num) { 
    long int rev_num = 0; 
    while(num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num /= 10; 
    } 
    return rev_num; 
}

int main() {

    long int a, b, d , rev;
    scanf("%ld %ld %ld", &a, &b , &d);

    int counter = 0;
    for(int i = a ; i <= b; i++) {
        int tempValue = 0;   
        rev = reversDigits(i);
        if(i > rev) tempValue = (i - rev);
        else tempValue = (rev - i);

        if (tempValue % d == 0) counter++;        
    }

    printf("%d\n",counter);


    return 0;

}