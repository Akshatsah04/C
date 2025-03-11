// write a program to print odd number using continues

#include<stdio.h>

int main(){
    for(int i=0;i<10;i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}