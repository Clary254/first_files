#include<stdio.h>

void printArray(int arr[] ,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int const columns =3;
    int const rows =2;
    int grades[2][3]={
        {34, 45, 67},
        {64, 78, 98}

    };
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d",grades[i][j]);
        }
        
    }
    return 0;
    
}

{


}