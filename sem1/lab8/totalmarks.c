#include<stdio.h>

int main(){
    int list[5][3];
    float avg[5];
    int total[3]={0};
    int sum=0;

    for (int i = 0; i <5; i++)
    {
        sum=0;
        printf("enter the subject %d marks of 3 student\n",i+1);
        for (int j = 0; j <3; j++)
        {
            scanf("%d",&list[i][j]);
            sum+=list[i][j];
            total[j]+=list[i][j];
        }
        avg[i]=sum/3.0;     
    }
    for (int i = 0; i <5; i++)
    {
        printf("marks of subject %d\n",i+1);
        for (int j = 0; j <3; j++)
        {
            printf("%d ",list[i][j]);
        }
        printf("\nthe average marks of subject %d is %.2f\n",i+1 , avg[i]);     
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nthe total marks of student %d is %d",i+1 , total[i]);     
    }
    
    return 0;   
}