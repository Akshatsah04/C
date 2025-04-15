#include<stdio.h>

int main(){
    int n , count=0 ,num=1;
    printf("enter the number: ");
    scanf("%d",&n);

    while (count<n)
    {
        num++;
        for (int j = 2; j < num; j++)
        {
            if (num%j==0)
            {
                break;
            }else if(j=num-1){
                printf("%d ",num);
                count++;
            }
            
        }
        
    }
    return 0;
    
}