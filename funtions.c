#include<stdio.h>
int main()
{
    int number=5;
    int factorial=1;

    for (int i=number ; i >1; i--
    )
    {
        //factorial = factorial *i;
        factorial *= i;
    }
    printf("The factorial of %d is %d\n",number,factorial);

    return 0;
    
}