#include<stdlib.h>
#include<stdio.h>

int main()
{

    int slices;
    printf("how many slices did you eat?: ");
    scanf("%d",&slices);
    int CaloriesPerSlice = 250;

    switch(slices)
    {
        case 1:
             printf("Youre doing a good job!");
             break;
        case 2:
             printf("You did an ok job.");
             break;
            
        case 3:
             printf("You did a bad job,eat 2 next time");
             break;

        case 4:
             printf("youre a dissapointment");
             break;

        default:
            printf("enjoy your heart disease");
            break;

    }
    printf("You had %d calories .\n",CaloriesPerSlice *slices);
}