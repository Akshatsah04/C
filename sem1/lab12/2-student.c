#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    float marks[3];
    float total;
};

void sortStudents(struct student s[], int n) {
    struct student temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].total < s[j].total) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    struct student s[100];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        getchar();
        
        printf("Name: ");
        scanf("%[^\n]s",s[i].name);
        getchar();
        
        s[i].total = 0;
        printf("Enter marks in 3 subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    } 

    sortStudents(s, n);

     printf("\n--- Student Details Sorted by Total Marks (Descending) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d | Name: %s | Total Marks: %.2f\n", s[i].roll_no, s[i].name, s[i].total);
    }

    return 0;
}
