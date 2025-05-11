#include<stdio.h>
#include<string.h>

struct employees
{
    int empno;
    char name[100];
    int salary;
    int hra;
    int netsalary;

};


int main(){
    
    int n;
    float avg=0;

    printf("enter the numbers of employees: ");
    scanf("%d",&n);
    struct employees emp[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter the employee number: ");
        scanf("%d",&emp[i].empno);
        getchar();
        printf("enter the name of the employee %d: ", i+1);
        fgets(emp[i].name , 100,stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';
        printf("enter the salary of employee %d: " ,i+1);
        scanf("%d",&emp[i].salary);
        printf("enter the hra of the employee %d: ",i+1);
        scanf("%d",&emp[i].hra);
        printf("enter the net salary of the employee %d: ",i+1);
        scanf("%d",&emp[i].netsalary);

        avg+=emp[i].netsalary;
        
    }
    avg/=n;
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        if (emp[i].netsalary>avg)
        {
            printf("employee number: %d\n" , emp[i].empno);
            printf("name of the employee: %s\n" , emp[i].name);
            printf("salary of the employee: %d\n" , emp[i].salary);
            printf("hra of the employee: %d\n" , emp[i].hra);
            printf("netsalary of the employee: %d\n\n" , emp[i].netsalary);
        }
        
    }
    
    return 0;
    

}