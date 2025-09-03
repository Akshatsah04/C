#include<stdio.h>




int main(){
    
    int n;

    printf("enter the size of your name\n");
    scanf("%d" , &n);
    char name[n];
    char ch[n];
    printf("enter your name with space\n");
    for(int i=0 ; i<n ; i++ ){
        scanf(" %c" , &name[i]);
    }
    for(int i=0 ; i<n ; i++ ){
        // char b = name[i] & ~(1<<5);
        // printf("%c",name[i]);
        ch[i]=name[i]-32;
        printf("%c",ch[i]);
    }
    return 0;
}