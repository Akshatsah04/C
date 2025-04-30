#include <stdio.h>
#include <string.h>

struct employee {
    int emp_no;
    char name[50];
    float basic;
    float hra;
    float net_salary;
};

int main() {
    struct employee emp[100];
    int n;
    float total_net_salary = 0.0, average;

     printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); 

     for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &emp[i].emp_no);
        getchar(); 

        printf("Name: ");
        scanf("%[^\n]", emp[i].name);
        getchar(); 

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        printf("HRA: ");
        scanf("%f", &emp[i].hra);

        emp[i].net_salary = emp[i].basic + emp[i].hra;
        total_net_salary += emp[i].net_salary;
    }

    average = total_net_salary / n;

    printf("\n--- Employees with Net Salary > Average (%.2f) ---\n", average);
    for (int i = 0; i < n; i++) {
        if (emp[i].net_salary > average) {
            printf("Emp No: %d | Name: %s | Basic: %.2f | HRA: %.2f | Net Salary: %.2f\n",emp[i].emp_no, emp[i].name, emp[i].basic, emp[i].hra, emp[i].net_salary);
        }
    }

    return 0;
}
