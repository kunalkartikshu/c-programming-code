#include <stdio.h>
/*
In this code we check the number is positive or negative or whether it is zero.
*/

int main()
{
   int num;
   while(1){
   printf("To check a number is positive or negative\n");
   printf("Enter a number to check .\n");
   scanf("%d",&num);
   if(num>0){
       printf("%d is positive\n",num);
   }
   else if(num<0){
       printf("%d is negative\n",num);
   }
   else if(num==0){
       printf("%d is zero\n",num);
   }
   }
    return 0;
}