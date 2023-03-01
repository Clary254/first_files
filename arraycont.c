#include<stdio.h>
int main()
{
    int size =6;
    int myGrade[size];
    myGrade[0] = 70;
    myGrade[1] = 75;
    myGrade[2] = 80;
    myGrade[3] = 76;
    myGrade[4] = 87;
    myGrade[5] = 67;

    for (int i=0 ; i < size; i++)
    {
        printf("%d\n",myGrade[i]);
    }
    
    return 0;

}