
#include <stdio.h>

int main() {
    
    int n,even=2,odd=1;

    printf("enter the number of row:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for (int j = 0; j < i+1; j++)
        {
            if(i%2==0){
                printf("%d ",odd);
                odd+=2;
            }else{
                printf("%d ",even);
                even+=2;
            }
        }
        printf("\n");
        
    }


    return 0;
}