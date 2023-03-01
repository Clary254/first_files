#include<stdio.h>
#include<stdlib.h>

int main()
{
    double money =500;
    double cost =80;

    money>cost ? printf("Congrats bro you qualify\n."): printf("sorry bro you need %lf to complete",cost-money);

    /*if (money>cost)
    {
        printf("Congrats bro you qualify\n.");

    }else 
    {
        printf("sorry bro you need %lf to complete",cost-money);
    }*/
}