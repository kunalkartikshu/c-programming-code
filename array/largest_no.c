#include <stdio.h>
int main() {
    int arr[4]={4,3,15,5};
    int largest=arr[0];
    for(int i=0;i<=3;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest number is: %d", largest);

}