#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    int x;
    // Unsigned type are promoted to signed types if the values fit.
    // Just because compilers can optimize doesn't mean they will.
    // Optimized example:
    a /= x;
    if(x == 0){
        printf("Hello!");
    }
    // Not optimized example
    a << x;
    if(x >= 32){
        printf("Hello!");
    }
    return 0;
}