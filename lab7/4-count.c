#include<stdio.h>

int main(){

    int n , negnum=0 , posinum=0 ,zero=0 , odd=0 ,even=0 ;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the input");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0){
            negnum++;
            
        }
        if(arr[i]>0){
            posinum++;

        }
        if(arr[i]==0){
            zero++;

        }
        if(arr[i]%2==0){
            even++;

        }
        if(arr[i]%2!=0){
            odd++;

        }
    }
    printf("frequecy of even number=%d\n",even);
    printf("frequecy of odd number=%d\n",odd);
    printf("frequecy of negative number=%d\n",negnum);
    printf("frequecy of positive number=%d\n",posinum);
    printf("frequecy of zero number=%d\n",zero);
    return 0;
    
}