#include <stdio.h>
/*In this code we will print multiplication table of a number.

*/

int main()
{
    int num;
    printf("enter number:  \n");
    scanf("%d",&num);
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d \n",num,i,i*num);
    }
printf("\n");
    return 0;
}