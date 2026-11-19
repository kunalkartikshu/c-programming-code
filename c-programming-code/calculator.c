#include <stdio.h>
/*
Calculator 
choise to enter.. 
1) addition
2) subtraction.
3)multiplication.
4)Division.
5)exit
*/

int main()
{
    int a,b,choise;
    do{
        printf("Enter choise to use calculator:  \n");
        printf("1) addition:\n");
        printf("2) Subtraction: \n");
        printf("3) multiplication:\n");
        printf("4) Division:\n");
        printf("5) exit:\n");
        scanf("%d",&choise);
        
        if(choise>=1 && choise<=4){
            printf("Enter two number to calculate:..(a and b)... \n ");
            scanf("%d %d",&a,&b);
        }
        switch(choise){
            case 1:
            printf("Result is %d\n",a+b);
            break;
            case 2:
            printf("Result is %d\n",a - b);
            break;
            case 3:
            printf("Result is %d\n", a * b);
            break;
            case 4:
            printf("Result is %d\n", a / b);
            break;
            case 5:
            printf("Exiting calculator....\n");
            break;
            default:
            printf("Invalid choise!, please enter a valid\n");
        }
        
        
        
    }while(choise!=5);
    return 0;
}