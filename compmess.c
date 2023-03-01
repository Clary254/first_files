#include<stdio.h>
#include<stdbool.h>
#include<time.h>

void main(void)
{
    
    int code, qtr;
    float price, amount,change,cash, total;
    char addChar;
    time_t rawtime;
    struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

do
    {
    //system("cls");
    printf("\n\t================================");
    printf("\n\tWELCOME TO THE VAG AUTO CLINIC.\n");
    printf("\tWe offer the following services:\n");
    printf("\t================================");
    printf("\n\t\t[1]Engine Alignment.");
    printf("\n\t\t[2]Wheel alignment services.");
    printf("\n\t\t[3]Gearbox checkout.");
    printf("\n\t\t[4]4Engine service.");
    printf("\n\t\t[5]Tinting services");
    printf("\n\t\t[6]Spanners\n");

    printf("\n\tPlease select the service:");
    scanf("%d",&code);
    printf("\n\tEnter the no of cars:");
    scanf("%d",&qtr);

    switch (code)
        {
        case 1: price=5000;
            break;
        case 2: price=6500;
            break;
        case 3: price=8000;
            break;
        case 4: price=10000;
            break;
        case 5: price=15000;
            break;
        case 6: price=20000;
        break;
        }
    
    amount= price*qtr;
    printf("\tamount. %.2f:",amount);

    total=total+amount;
    printf("\t\tTotal=%.2f",total); 

    printf("\n\tAdd another order y/n .");
    scanf("%c",&addChar);
    addChar=getchar();

    
    }while (addChar=='Y' ||addChar=='y');
    printf("\t\tCash rendered:");
    scanf("%f",&cash);

    change=cash - amount;


   printf("\n\t\tChange=%.2f",change);
   printf("\n\t======================================");
   printf("\n\t\tServed by Kadugush\t\t");
    printf ( "\n\t on %s", asctime (timeinfo) );
   printf("\n\t======================================\n");




}
