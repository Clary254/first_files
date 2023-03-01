#include<stdio.h>
#include<math.h>

int main()
{
    printf("This program will calculate diagonal of a right triangle:\n");

    int first;
    int second;
    int third;

    printf("enter the first side:");
    scanf("%i",&first);

    printf("enter the second number");
    scanf("%i",&second);

    int third = sqrt((first * first)(second * second));

    printf("The third side is : %i\n",third);




    return 0;
}