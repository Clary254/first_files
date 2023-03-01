#include<stdio.h>
int main()
{
    int first;
    int second;
    printf("enter the first number:");
    scanf("%i",&first);

    printf("enter the second number:");
    scanf("%i",&second);
     
    int div = first / second;
    
    printf("The div is %i\n :",div);
    
    return 0;
}