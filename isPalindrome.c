// importing necessary libraries::
#include <stdlib.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

bool isPalindrome(int x){
    if (x<0) return false;
    int r = 0;
    int tmp = x;
    while (tmp !=0){
        int rem = tmp % 10;
        if (r > INT_MAX / 10 || (r == INT_MAX / 10 && rem > 7)) return 0;
        r = r * 10 + rem;
        tmp /= 10;
    }

    if (x == r)return true;
    return false;
}
