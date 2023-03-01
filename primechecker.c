#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


bool isPrime(int input)
{
    for (int  i= sqrt(input); i > 1; i--)
    {
        if (input% i == 0)
        {
            return false;
        }
        
    }
    return true;
}
int main()

{
    int input;
    scanf("%d",&input);

    for(int i=input; i>1; i--)
    {
        bool prime =isPrime(i);
        if(prime)
        {
            printf("%d is prime\n",i);
        }else
        {
            printf("%d is not prime\n",i);
        }
        
    }
    return 0;
}