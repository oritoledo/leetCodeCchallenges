#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int reverse(int x){
    int reversed = 0;
    while (x != 0){
            int p = x % 10;
            x /= 10;
            if (reversed > INT_MAX/10 || (rev == INT_MAX / 10 && p > 7)) {
                return 0;
            }
            else if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && p < -8)) {
                return 0;
            }
            reversed = reversed * 10 + p;
        }
        return reversed;
    }
