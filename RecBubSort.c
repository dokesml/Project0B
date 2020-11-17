#include <stdio.h>
#include <cs50.h>
#include <unistd.h>



void RecBubSrt(int NumList[], int x)
{
    int y = x;
    if (y > 0)
    {
        for (int i = 0; i < x - 1; i++)
        {
            if (NumList[i] > NumList[i + 1])
            {
                int z = NumList[i];
                NumList[i] = NumList[i + 1];
                NumList[i + 1] = z;
            }
        }
    
    RecBubSrt(NumList, x - 1);
    }
    
}

void ShowNumList(int NumList[], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d, ", NumList[i]);
    }
    printf("\n");
}


int main()
{
    int NumList[] = {2, 4, 5, 1, 3, 1};
    int x = sizeof(NumList)/sizeof(NumList[0]);
    printf("lenghth of array %d\n", x);
    RecBubSrt(NumList, x);
    printf("Numbers Sorted : \n");
    ShowNumList(NumList, x);
    return 0;
}  
