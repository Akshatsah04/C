#include<stdio.h>
#include<string.h>

int pali(char str[]);

int main(){
    char str[100];
    printf("enter the string\n");
    scanf("%s",str);

    if (pali(str)==0)
    {
        printf("the string is not a palindrome");
    }else{
        printf("the string is a palindrome");
    }
    
    return 0;

}

int pali(char str[]){
    char new[100];
    int len=strlen(str);
    for (int i = 0; i<len; i++)
    {
        new[len-i-1]=str[i];
    }
    new[len]='\0';
    if (strcmp(str , new)==0)
    {
        return 1;
    }else{
        return 0;
    }
    
    
}