#include<stdio.h>
#include<math.h>

int  main()
{
    int no;
    printf("welcome to Your lucky number Casino.\n");
    printf("Please press 1 to proceed or any number to exit: ");
    scanf("%d",&no);
    getchar();

    if (no==1)
    {
    
    int i;
    printf("Enter your lucky number: \n ");
    scanf("%d",&i);

    getchar();
    printf("you entered:%d\n",i);
    if (i==24)
    {
        printf("congrats.You won 2.5 million!\n");
        
    }else if (!(i==24))
        {
            printf("Opps!,thanks for playing though.\n");
        }
    else    
    {
        printf("Thanks for visiting us!\n ");
    }
    return 0;
}
}

