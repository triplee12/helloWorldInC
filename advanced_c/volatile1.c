#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Volatile means that something is observable even though it may not look like observable
    // to declare volatile variables, we use keyword volatile
    volatile int a, b;
    a = 0;
    a = 1;
    // now the variables are not equal to 1
    // because compiler will see a = 0 as observable and not a = 1
    // it makes the compiler hard to optimize this

    // let's look at another example
    volatile int c;
    int x = c;
    int y = c;
    // is not equal to declaration below because you thing x and y have the same value
    x = c; // x can change without been noticeable
    y = x; // to y because volatile means don't trust a number because its value can change anytime

    volatile int a;
    // Let's talk about while loop
    while (a)
    {
        printf("Waiting!\n"); // this will run forever if a is true
    }
    // But looking at example below, compiler will compile the code faster than when compiling above code
    // When having optimizations in mind, don't follow code steps below because value of a might change during compilation
    if(a)
    {
        while (true)
        {
            printf("Waiting!\n"); // this will run forever if a is true
        }
        
    }

    /*
        Where can we use volatile for:
        - Hardware interaction
        -  Memory mapped files
        - "touch" memory
        - Multi-threading*
    */

    return 0;
}