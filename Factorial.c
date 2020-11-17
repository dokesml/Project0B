#include <cs50.h>
#include <stdio.h>

int main()
{
    
    int fact = 1;
    
    
    int n = get_int("Enter value for n to find factorial: ");
    
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    
    printf("Factorial is %d\n", fact);

    return 0;
    
}