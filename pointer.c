#include<stdio.h>
int main()
{
    int slices =30;
    int *p =&slices;

    printf("The no of slices is %d\n",*p);

    (*p)--;

    printf("The no of slices is %d\n",*p);
    


    return 0;
    
}