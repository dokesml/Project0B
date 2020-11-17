#include <cs50.h>
#include <stdio.h>



int fibn(int n)
{
    int x = 0, y = 1, z, i;
    if (n == 0)
    return x;
    for (i = 2; i <= n; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}


int main()
{
    int n = get_int(" enter value:\n");
    printf("Fibonacii number is %d", fibn(n));
    return 0;
}