#include<stdio.h>
int main()
{
    char ASCII;
    printf("please enter a character: ");
    scanf("%c",&ASCII);
    printf("%i\n",ASCII);
    
    int integer;
    printf("enter an interger btw 0-127: ");
    scanf("%i",&integer);

    printf("%c",integer);
}