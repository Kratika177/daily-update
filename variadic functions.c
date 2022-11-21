#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000


int  sum (int count,...) {
    va_list pArgs;
    int sum = 0;
    
    va_start(pArgs, count);
    
    while (count-- > 0)
        sum += va_arg(pArgs, int);    

    va_end(pArgs);
    return sum;
}

int min(int count,...) {
    va_list pArgs;
    int curr = MAX_ELEMENT;  
    
    va_start(pArgs, count);
    
    while (count-- > 0)
    {
        int val = va_arg(pArgs, int);
        if (val < curr)
            curr = val;
    }

    va_end(pArgs);
    return curr;
}

int max(int count,...) {
    va_list pArgs;
    int curr = MIN_ELEMENT;
    
    va_start(pArgs, count);
    
    while (count-- > 0)
    {
        int val = va_arg(pArgs, int);
        if (val > curr)
            curr = val;
    }

    va_end(pArgs);
    return curr;
}

int test_implementations_by_sending_three_elements() {
