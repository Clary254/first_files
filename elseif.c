#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

//making an app for doctors office 
//add a ppatient
//view a patient
//search patient
//exit

int main()
{
    printf("Choose a menu option 1-4:\n");
    printf("Add a patient\n");
    printf("View a patient\n");
    printf("Search a patient\n");

    int input;
    scanf("%d",&input);

    if (input == 1)
    {
        printf("we are adding a patient\n.");


    }else if (input == 2)
    {
        printf("We are viewing a patient.\n");
    

    }else if (input == 3 )
    {
        printf("searching a patient.\n");

    }else if(input==4);
    {
        printf("incorrect input");


        int q;
        printf("do you wanna save? Y for yes,N for no: ");
        getchar();
        scanf("%d",&q);
        

        if(q == 'Y' || q == 'y')
        {
            printf("saving sanges..\n");
        }
        else if (q == 'N'||q == 'n')
        {
            printf("Exiting\n");
        }else
        {
        printf("Hacking detected\n");
        }
    }
    
    return 0;
}

