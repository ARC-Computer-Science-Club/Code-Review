//Artem Tkachuk
//Problem 1 solution
//C programming lanugage

#include <stdio.h>

int main(void) {
    
    int sum = 0, i = 3, j = 5, below = 1000;
    
    for (; i < below; i += 3) {
        sum += i;
    }
    
    for (; j < below; j += 5) {
        if (j % 3) {
            sum += j;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}
