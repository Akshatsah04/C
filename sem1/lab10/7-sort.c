#include<stdio.h>
#include<string.h>

int sort(char names[][100] , int n);

int main(){
    int n;
    printf("enter the no. of names: ");
    scanf("%d",&n);

    char names[n][100];

    printf("enter the names\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s" , names[i]);
    }

    sort(names , n);

    printf("names after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n" , names[i]);
    }
}

int sort(char names[][100] , int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(strcmp(names[j] , names[j+1])>0){
                char temp[100];
                strcpy(temp , names[j]);
                strcpy(names[j] , names[j+1]);
                strcpy(names[j+1] , temp);
            }
        }
        
    }

    return 0;
    
}