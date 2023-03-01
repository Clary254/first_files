#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    int input=104395303;
    int isPrime= true;
    for (int i=sqrt(input); i>1; i--)
    {
        //printf("%d",i);
        if(input % i ==0)
        {
            isPrime= false;

        }
    }
     if (isPrime)
     {
        printf("it is prime");
     }else 
        {
            printf("\n is not prime");
        }   

}
    
