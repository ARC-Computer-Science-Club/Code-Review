#include <stdio.h>
#include <stdbool.h>


int main(void) {
    
    const unsigned UPPER_LIMIT = 4000000;
    
    unsigned prev = 1, curr = 2, sum = 0;
    
    while (true) {
        
        if (curr > UPPER_LIMIT) {
            
            printf("%u", sum);
            
            break;
            
            
        } else {
            
            if (!(curr % 2)) {                    //add only even numbers
                
                sum += curr;
                
            }
            
        }
        
        curr += prev;                            //count the next term
        
        prev = curr - prev;                        //of Fibonacci sequence
        
    }
    
    return 0;
}
