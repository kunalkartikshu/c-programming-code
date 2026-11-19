/*In this programme, we will find the largest number in an array*/

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0; i<size;i++){
        printf("Enter the value of %d index\n",i);
        scanf("%d",&arr[i]);
    }
    int gre = arr[0];
    for(int i=0; i<size;i++){
        if(gre<arr[i]){
            gre = arr[i];
        }
    }
    printf("the greatst no. is : %d\n",gre);

    return 0;
}