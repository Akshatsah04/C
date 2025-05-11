#include<stdio.h>
#include<string.h>

struct students
{
    char name[100];
    int roll;
    float sub1;
    float sub2;
    float sub3;
    float total;
};


int main(){
    int n;
    printf("enter the number of student: ");
    scanf("%d",&n);
    getchar();
    struct students s[n];

    for (int i = 0; i < n; i++)
    {
        s[i].total=0;
        printf("enter the name of student %d\n",i+1);
        fgets(s[i].name,100,stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("enter the roll no of student %d\n",i+1);
        scanf("%d",&s[i].roll);
        printf("enter the marks of 1st subject of student %d\n",i+1);
        scanf("%f",&s[i].sub1);
        s[i].total+=s[i].sub1;
        printf("enter the marks of 2nd subject of student %d\n",i+1);
        scanf("%f",&s[i].sub2);
        s[i].total+=s[i].sub2;
        printf("enter the marks of 3rd subject of student %d\n",i+1);
        scanf("%f",&s[i].sub3);
        s[i].total+=s[i].sub3;
        getchar();
    }

    struct students temp;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-1 ; j++)
        {
            if (s[j].total<s[j+1].total)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("name of student %d is %s\n",i+1,s[i].name);
        printf("roll number of the student %d is %d\n",i+1,s[i].roll);
        printf("total marks of student %d is %.2f\n\n",i+1,s[i].total);
    }
    
    return 0;
    
}