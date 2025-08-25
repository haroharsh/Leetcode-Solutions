#include <stdio.h>
#include <limits.h>
int myAtoi(char* s) {
    int i = 0;
    while (s[i] == ' ') {
        i++;
    }
    int sign = 1;
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }
    int result = 0;
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        if (result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        i++;
    }
    return result * sign;
}