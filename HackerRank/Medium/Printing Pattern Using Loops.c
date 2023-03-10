#include <stdio.h>
#include <stdlib.h>

void PrintPattern(int n)
{
    printf("\n");

/* 
// Solution 1: The easiest 

    int RowsNo = n*2-1;
    int arr[RowsNo][RowsNo];

    int Start=0, End=RowsNo-1;

    while(n != 0)
    {
        for(int i=Start; i<=End; i++)
        {
            for(int j=Start; j<=End; j++)
            {
                arr[i][j]=n;

            }
        }

        n--;
        Start++;
        End--;
    }

    for(int i=0; i<RowsNo; i++)
    {
        for(int j=0; j<RowsNo; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    */

    int len = 2*n-1;
    
    for(int row=0; row<len; row++)
    {
        for(int col=0; col<len; col++)
        {
            int min;

            if(row < col)
            {
                min = row;
            }
            else
            {
                min = col;
            }

            if(min >= len-row)
            {
                min = len-row-1;
            }

            if(min >= len-col)
            {
                min = len-col-1;
            }

            printf("%d ",n-min);
        }

        printf("\n");
    }
    printf("\n");
}

int main()
{
    int Lines;

    while(1)
    {
        printf("Please enter the number of lines for pattern: ");
        scanf("%d", &Lines);

        PrintPattern(Lines);

        printf("========================================================\n");
    }


    return 0;
}