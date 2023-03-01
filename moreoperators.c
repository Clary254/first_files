//create a program that takes two doubles as inputs ,calculates the hypotenuse of a right angled triangle and output it
#include<stdio.h>
#include<math.h>

int main()
{
    double a;
    double b;

    printf("This app will calculate the hypotenuse of right triangle .\n");

    printf("enter the first value:");
    scanf("%lf",&a);

    printf("enter the second value :");
    scanf("%lf",&b);

    double c = sqrt((a*a)+(b*b));

    printf("The hypotenuse is %f\n",c);
    return 0;
}