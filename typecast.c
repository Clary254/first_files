#include<stdio.h>
int main()
{
    int eggs;
    printf("ennter the no of eggs ");
    scanf("%i",&eggs);
    

    double dozen =  (double) (eggs) / 12.0;
    printf("you have %f dozen eggs ",dozen );
    return 0;
}