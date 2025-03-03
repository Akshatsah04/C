#include<stdio.h>

int main(){
    char n;
    printf("enter any character\n");
    scanf("%c",&n);

    if(n>47 && n<58){
        printf("Given character is a digit");
    }else{
        if(((n>=65 && n<=90)||(n>=97 && n<=122))&&(n==65||n==69||n==73||n==79||n==85||n==97||n==101||n==105||n==111||n==117)){
            printf("Given character is a vowel\n");
        }else{
            printf("Given character is consonant\n");
        }
    }

    return 0;

}