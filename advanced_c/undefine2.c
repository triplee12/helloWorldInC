#include <stdio.h>


int main()
{
    // Undefined is when calling a variable or function that is not defined
    // Its undefined behavior to call exit() more than once.
    // Undefined behavior is very powerful because it lets compilers do smart things
    // Let's talk about optimizations: C is fast because its undefined.
    int x = (x * 2) / 2;

    // What if there is no undefined behavior
    int a[5];
    a[x] = 0;
    if (a >= 5)
    {
        printf("Hello, world\n"); // this will cause our program to fail because a is array of 5
        // causing undefined to be unreachable
    }
    
    return 0;
}