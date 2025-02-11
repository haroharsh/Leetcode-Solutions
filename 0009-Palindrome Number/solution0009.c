#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long int x) {
    if(x<0)
    return false;
    long int flip = 0;
    long int temp = x;
    while (temp != 0) {
        flip = (flip * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (flip == x);
    
}