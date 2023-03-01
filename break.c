#include<stdio.h>

int main()
{
    int no =230;
    int i=0;
    while(1)
    {
        printf("%d",no);

        if(i==no)
        {
            printf("we found it!\n");
            break;
        }
        i++;
    }
}