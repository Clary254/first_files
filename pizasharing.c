#include<stdio.h>
int main()
{
    int Piecesofpizza= 65;
    int Eaters =22;
    int Leftovers = Piecesofpizza % Eaters;


    printf("The leftovers are : %i\n",Leftovers);
    return 0;


}