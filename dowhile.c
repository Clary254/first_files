#include<stdio.h>
#include<stdbool.h>

int main()
{
    int input;
    do
    {
        printf("enter a number 1-9:\n");
        scanf("%d",&input);
    }while(input < 0 || input > 9 );
   
    printf("you entered : %d\n",input);
    
    return 0;
}