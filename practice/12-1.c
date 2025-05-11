#include<stdio.h>

struct personal
{
    char name[100];
    char doj[100];
    float salary;
};


int main(){

    struct personal p1;

    printf("enter the name of person\n");
    fgets(p1.name , 100 , stdin);
    printf("enter the date of joining of person in the format dd-mm-yyyy\n");
    scanf("%s",&p1.doj);
    printf("enter the salary of the person\n");
    scanf("%f",&p1.salary);


    printf("name of the perosn is %s" , p1.name);
    printf("date of joining of the perosn is %s\n",p1.doj);
    printf("salary of the person is %.2f\n",p1.salary);

    return 0;
}