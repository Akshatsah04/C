#include<stdio.h>

struct person
{
    char name[100];
    int doj;
    int salary;
};


int main(){

    struct person p1;
    printf("enter the name of the person\n");
    fgets(p1.name,100,stdin);

    printf("enter the date of joining of the person\n");
    scanf("%d" , &p1.doj);

    printf("enter the salary of the person\n");
    scanf("%d" , &p1.salary);

    printf("name of the person is %s",p1.name);
    printf("date of the joining of the person is %d\n",p1.doj);
    printf("salary of the person is %d",p1.salary);


    return 0;
    

}