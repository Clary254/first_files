#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void main(void)

{
    int choice, breakfast,lunch,dinner,snacks,drinks,quantity;
    int order;
    float amount, change,cash ,price,total;
    char Addchoice;
    
   


do
    {
    system("cls");
    printf("\n===================================\n");
    printf("n\tWELCOME TO TMUC MESS\n");
    printf("\n\tWE OFFER THE FOLLOWING SERVICES");
    printf("\n1. BREAKFAST\n");
    printf("\n2. LUNCH\n");
    printf("\n3. DINNER\n");
    printf("\n4. SNACKS\n");
    printf("\n5. DRINKS\n");
    printf("\nSelect your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\n===================================");
            printf("\n\tBREAKFAST MENU");
            printf("\n===================================");
            printf("\n1. Idli\t\t\tksh. 150");
            printf("\n2. Dosa\t\t\tksh. 300");
            printf("\n3. Poha\t\t\tksh. 200");
            printf("\n4. Upma\t\t\tksh. 50");
            printf("\n5. Vada\t\t\tkshs. 100");
           
    
            break;
            case 2: 
            printf("\n===================================");
            printf("\n\tLUNCH MENU");   
            printf("\n===================================");
            printf("\n1. Idli\t\t\tRs. 20");        
            printf("\n2. Dosa\t\t\tRs. 30");
            printf("\n3. Poha\t\t\tRs. 20");
            printf("\n4. Upma\t\t\tRs. 20");
            printf("\n5. Vada\t\t\tRs. 20");
            printf("\n6. Poori\t\tRs. 30");
            printf("\n7. Paratha\t\tRs. 30");
            printf("\n8. Bread Butter\t\tRs. 30");
            printf("\n9. Bread Jam\t\tRs. 30");
            printf("\n10. Bread Cheese\t\tRs. 40");
            break;
            case 3:

            printf("\n===================================");
            printf("\n\tDINNER MENU");
            printf("\n===================================");
            printf("\n1. Idli\t\t\tRs. 20");
            printf("\n2. Dosa\t\t\tRs. 30");
            printf("\n3. Poha\t\t\tRs. 20");
            printf("\n4. Upma\t\t\tRs. 20");


            break;
            case 4:

            printf("\n===================================");

            printf("\n\tSNACKS MENU");
            printf("\n===================================");
            printf("\n1. Idli\t\t\tRs. 20");
            printf("\n2. Dosa\t\t\tRs. 30");
            printf("\n3. Poha\t\t\tRs. 20");
            printf("\n4. Upma\t\t\tRs. 20");
            printf("\n5. Vada\t\t\tRs. 20");
            printf("\n6. Poori\t\tRs. 30");
            printf("\n7. Paratha\t\tRs. 30");
            printf("\n8. Bread Butter\t\tRs. 30");
            printf("\n9. Bread Jam\t\tRs. 30");
            printf("\n10. Bread Cheese\t\tRs. 40");
            break;

            case 5:
            printf("\n===================================");
            printf("\n\tDRINKS MENU");
            printf("\n===================================");    
            printf("\n1. Idli\t\t\tRs. 20");
            printf("\n2. Dosa\t\t\tRs. 30");
            printf("\n3. Poha\t\t\tRs. 20");
            printf("\n4. Upma\t\t\tRs. 20");
            printf("\n5. Vada\t\t\tRs. 20");
            printf("\n6. Poori\t\tRs. 30");
            printf("\n7. Paratha\t\tRs. 30");
            printf("\n8. Bread Butter\t\tRs. 30");
            printf("\n9. Bread Jam\t\tRs. 30");
            printf("\n10. Bread Cheese\t\tRs. 40");
            break;
    
    }   
    getchar();
    printf("\nKindly select your order:");
    scanf("%d",&order);
    printf("\nenter the quantity:");
    scanf("%d",&quantity);
    
    {
        switch (order)
        {
        case 1:
            price=150;
            break;
        case 2:
            price=300;
            break;
        case 3:
            price=200;
        case 4:
            price=50;
            break;
        case 5:
        price=100;
            break;
    
        }
   
    }
    amount=price*quantity;
   
    printf("\nAmount=%.2f",amount);

    total=total+amount;
    printf("\ntotal=%.2f",total);
    

    printf("would you like to preceede?(y/n)");
    scanf("%c",&Addchoice);
    
    Addchoice=getchar();
    }
    while (Addchoice=='y'||Addchoice=='Y');
    printf("\t\tCash rendered:");
    scanf("%f",&cash);
    change=cash - total;
    printf("\n\t\tChange=%.2f",change);
    
    

    
} 


   
