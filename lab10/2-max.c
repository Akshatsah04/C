#include<stdio.h>

int max(int set[] , int n);

int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d" , &n);
    int set[n];
    printf("enter the input in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &set[i]);
    }


    printf("%d", max(set, n));

    


}

int max(int set[], int n ){
    int max =set[0];
    for (int i = 0; i < n; i++)
    {
        if (set[i]>max)
        {
            max=set[i];
        }
        
    }
    return max;
}