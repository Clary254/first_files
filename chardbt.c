#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=5;
    double b=5.5;
    char c='a';
    float d=5.5;
    printf("The value of a is %d\n",a);
    printf("The value of b is %lf\n",b);
    printf("The value of c is %c\n",c);
    printf("The address of a is %u\n",&a);
    printf("The address of b is %u\n",&b);
    printf("The address of c is %u\n",&c);
    printf("The size of a is %d\n",sizeof(a));
    printf("The size of b is %d\n",sizeof(b));
    printf("The size of c is %d\n",sizeof(c));
    printf("The size of int is %d\n",sizeof(int));
    printf("The size of double is %d\n",sizeof(double));
    printf("%d,",sizeof(d));
}