#include<stdio.h>

int main(){
    int n , k ,t=1;
    printf("input for n: ");
    scanf("%d" , &n);

    printf("input for k: ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=k; j++)
        {
            t=i*j;
            printf("%d ", t);
        }
        printf("\n");
        
    }
    return 0;
    
}