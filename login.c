#include<stdio.h>
#include<string.h>

int main()
{
    char ch;
    char pass[20],saved_pass[30],user_name[20],saved_name[30];
    int l;

    name:
    printf("Enter username: ");
    scanf("%s",user_name);

    FILE *ptr;
    ptr =fopen("pass.txt","r");

    fscanf(ptr,"%s%s",saved_name,saved_pass);
    if (strcmp(user_name,saved_name));
    {
        printf("INCORRECT USERNAME\n Please Try Again\n");
        goto name;
    }
    else 
    {
        start:
        printf("Enter Password: ");
        int i =0;
        while (1)
        {
            ch=getchar();
            if (ch ==13)
            {
                pass [i]= '\0';
                break;
            }
            elseif (ch == BKSP)
            {
                if (i >0)
                {
                    i--;
                    printf("\b  \b");
                }
            }
            else if (ch == 9 || ch ==32)
    {
        continue;
    }
    else
    {
        pass[i++]=ch;
        printf("*")
    }
    }
    
    int l=strcmp(pass,saved_pass);
    if (l == 0)
    {
        printf("LOGIN SUCCESFULLY\n");
    }
    else
    {
        printf("INCORRECT PASSWORD\n");
        goto start;
    }

    return 0;
}
}