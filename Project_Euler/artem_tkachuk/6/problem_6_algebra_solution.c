//        Problem 6 from Euler Project Solution

/*
 
 The aim is to make the simplest possible formula with minimum amount of calculations &
 with only one parametr - n (one hundred in this particular case)
 
 Transformations & albegra tricks, that led to the final algorithm:
 
 //some kind of math proof: https://drive.google.com/file/d/1g00oQ-yz5RDbkoOVJxNTRoaza8AQcd5r/view?usp=sharing
 
 */

#include <stdio.h>

int main(void) {

    unsigned k = 1, sum = 0, n = 0;
    
    puts("Enter number:");
    scanf("%u", &n);
    
    
    for (; k < n; k++) {
        sum += (k * (n - k) * (n + k + 1));
    }
    
    
    printf("The squared sum of first %u numbers - sum of squares of the first %u numbers = %u\n", n, n, sum);
        
    return 0;
    
}
