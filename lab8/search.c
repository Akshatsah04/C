#include<stdio.h>

int main(){
    int row , col,n,count=0;
    printf("enter the value to search:");
    scanf("%d",&n);
    printf("enter the size of matrix:");
    scanf("%d%d",&row ,&col);
    int mat[row][col];
    
    printf("enter the value of matrix\n");
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            scanf("%d",&mat[i][j]);
            if (mat[i][j]==n)
            {
                count++;
            }
            

        }
        
    }
    printf("frequency of number %d is %d",n,count);
    return 0;
}