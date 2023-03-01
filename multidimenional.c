#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int const columns = 3;
    int const row = 2;
    int grades[2][3] = {
        {45, 56, 65} ,
        {64, 78, 89}
    };
    for (int i=0 ; i < row; i++)
    {
        for (int j=0;  j < columns; j++)
        {
            printf("%d",grades[i][j]);
        }
        
    }
    return 0;
    
}