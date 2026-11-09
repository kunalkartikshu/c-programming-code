#include <stdio.h>
/*
In this code we will check whether the given number is even or odd....
*/

int main()
{
    int num;
while(1){
    printf("Enter a number to check even or odd:  \n");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number %d is even:\n",num);
    }
    else{
        printf("the number %d is odd\n",num);
    }
}
    return 0;
}