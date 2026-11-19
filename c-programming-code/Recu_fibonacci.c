#include <stdio.h>
/*
In this code we will find fibonacci sequence 
F0=0,F1=1;
We use formula:   Fn=F(n-1) + F(n-2);
*/

int fib_seq(int n){
if(n==0){
    return 0;
}
else if(n==1){
    return 1;
}
else if(n>1){
    return fib_seq(n-1) + fib_seq(n-2);
}

}

int main(){
int n;
printf("Enter a number which you want their fib_series\n");
scanf("%d",&n);
printf("The series is:  \n");
for(int i=0; i<=n; i++){
    printf("%d ",fib_seq(i));
}
printf("\n");
return 0;
}