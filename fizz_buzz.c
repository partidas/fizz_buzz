#include <stdlib.h>

void fizz_buzz() {
    for(int i = 0; i < 10; i++) {
        if(!(i%3) && !(i%5)) {
            printf("FizzBuzz\n");
        } else if(!(i%3)) {
            printf("Fizz\n");
        } else if(!(i%5)) {
            printf("Buzz\n");
        } else {
            printf("%i\n", i);
        }
    }
}