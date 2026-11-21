#include <stdio.h>

int main()
{
    int row,col;
    printf("enter row and col\n");
    scanf("%d %d",&row,&col);
    
    int arr[row][col];
    printf("enter the element\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("printing matrix element\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}