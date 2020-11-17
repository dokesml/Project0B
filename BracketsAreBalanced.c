#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

bool y = true;

bool BracketsAreBalanced(char Bal[])
{
    
    int x = 0;
    for(int i = 0; Bal[i] != '\0'; i++)
    {
        if(Bal[i] == '(')
        {
            x++;
        }
        else
        {
            x--;
        }
        if(x < 0)
        {
            y = false;
            break;
        }
        if(x != 0)
        {
            y = false;
        }
    }
    return y;
}

int main()
{
    char Bal[] = "({(()()))}";
    BracketsAreBalanced(Bal);
    printf("%c\n", y);
    
}