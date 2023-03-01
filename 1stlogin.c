#include<stdio.h>
#include<string.h>
#include<curses.h>

int main()
{
    char ch;
    char pass[20];
    char saved_pass[20];
    int i=0;
    start:
    ch=getchar();
    if(ch==13)
     {
        pass[i]='\0';
        break;
    }
    else
    {
        pass[i++]=ch;
        printf("*");

    }
    printf("You entered: %s\n",pass);

    FILE *ptr;
    ptr=fopen("pass.txt","r");
    scanf(ptr,"%s",saved_pass);

    int l=strcmp(pass,saved_pass);
    if(l==0)
    {
        printf("LOGIN SUCCESFULLY");
    }  
    else
    {
        printf("INCORRECT PASSWORD");
    }
    goto start;  
    return 0;
}