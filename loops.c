#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max;
    int i;
  
    printf("enter the maximum number:\n");
    scanf("%d",&max);

    for (int i =1 ; i<max; i++)
    {
        printf("%d\n",i);
    }
    printf("you printed %d numbers\n",max);
    return 0;
}