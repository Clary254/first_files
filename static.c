#include<stdio.h>
int calc()
{
    /*in static variables the values will be incremented*/
    static int sum=0;
    sum++;
    return sum;
}
void main()
{
    printf("%d\n",calc());
    printf("%d\n",calc());
    printf("%d\n",calc());
    printf("%d\n",calc());
}
