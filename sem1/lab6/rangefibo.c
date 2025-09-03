#include<stdio.h>

int main(){
    int l , u ,fb=1 ,cur=1 , next =1;
    printf("enter the lower and upper limit\n");
    scanf("%d%d" , &l , &u);

    if (l<=1)
        {
            printf("1 1 ");
        }

    for (int i = 0; i <u; i++)
    {
        
        fb=cur + next;
        cur = next;
        next=fb;
        if(fb<=u && fb>=l)
        {
            printf("%d " , fb);
        }
        
        
    }
    return 0;
    
}