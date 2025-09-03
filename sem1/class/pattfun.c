#include<stdio.h>

int lowtri(int);

int main(){
    int n;
    printf("enter the row: ");
    scanf("%d",&n);

    lowtri(n);
    return 0;
}

int lowtri(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j<=i; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
    
}