#include<stdio.h>
float pi=3.14;
int circle()
{
    int r;
    r=5;
    double area;
    area = pi*r*r;
    return area;
}
void main()
{
    printf("%d\n",circle());


}
