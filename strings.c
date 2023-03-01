#include<stdio.h>
int main()
{
    printf("What is your favorite food?:\n");
    char favFood[50];
    scanf("%49s",favFood);
    printf("my favorite food is %s\n",favFood);

    int charCount = 0;
    while (favFood[charCount])
    {
        charCount ++;
    }

    printf("The character count  of %s is %d\n",favFood,charCount);
    
}