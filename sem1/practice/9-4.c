#include<stdio.h>

int main(){
    char sen[]="this is the best way to solve the problem into";
    int i=0 , words=1;
    while (sen[i]!='\0')
    {
        if (sen[i]==' ')
        {
            words++;
        }
        i++;
    }
    printf("number of word : %d" , words);

    return 0;
    
}