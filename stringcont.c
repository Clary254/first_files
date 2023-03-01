#include<stdio.h>
#include<string.h>
int main()
{
    int pass;
    printf("please enter your password:1 for yes 2 for no\n");
    scanf("%d",&pass);
    getchar();

    if (pass==1)
    {    
    printf("What is your favorite food?:\n");
    char favFood[50];
    scanf("%49s",favFood);
    printf("my favorite food is %s\n",favFood);

    int charCount = strlen(favFood);

    printf("The character count of %s  is %d\n",favFood, charCount);
    }
    else if(pass==2)
    {
        printf("Idiot,why are you here!\n exiting......");
    }
    else
    {
        printf("you dont qualify.\n");
    }
    return 0;
    
}