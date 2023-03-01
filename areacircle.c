#include<stdio.h>
int main()
{
    int radius;
    printf("please input a radius: ");
    scanf("%i\n", &radius);
    
    double area = 3.14 * (radius * radius );
    printf("the area is %f",area);
    
    return 0;
    
}