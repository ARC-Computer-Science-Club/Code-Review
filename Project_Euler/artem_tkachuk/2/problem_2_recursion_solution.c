#include <stdio.h>



unsigned fib(unsigned n);                                //prototyping the recursive function for computing Fibonacci numbers



int main(void) {
    
    const unsigned UPPER_LIMIT = 4000000;
    
    unsigned int sum = 0, j = 2, temp_sto = 0;             //j = 2 is the number of the first even term of the sequence
    
    
    
    while ((temp_sto = fib(j)) < UPPER_LIMIT) {            //because starting with j = 2 only terms of Fibonacci sequence with numbers, that are computed by adding three are even
        
        sum += temp_sto;
        
        j += 3;
        
    }
    
    printf("%u", sum);
    
    return 0;
}



unsigned fib(unsigned n) {                                //defining fibonacci function
    if (n > 2) {
        
        return (fib(n - 1) + fib(n - 2));
        
    } else if (n == 2) {
        
        return 2;
        
    } else {
        
        return 1;
        
    }
}


