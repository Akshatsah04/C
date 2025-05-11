#include<stdio.h>


struct date{
    int day;
    int month;
    int year;
};


int month(int n , int year){
    if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        return 31;
    }
    else if (n==2)
    {
        if((year%4==0 && year%100!=0)|| year%400==0)
        return 29;
        else
        return 28;
        
    }
    else
    return 30; 
}

struct date add(struct date currdate){
    currdate.day+=45;

    for (int i = 0; i < 5; i++)
    {
        int maxday = month(currdate.month , currdate.year);

        if (currdate.day>maxday)
        {
            currdate.day-=maxday;
            currdate.month+=1;
        }
        if (currdate.month>12)
        {
            currdate.month =1;
            currdate.year+=1;
        }
    }

    return currdate;

}

int main(){

    struct date currdate;

    printf("enter the day: ");
    scanf("%d",&currdate.day);
    printf("enter the month: ");
    scanf("%d",&currdate.month);
    printf("enter the year: ");
    scanf("%d",&currdate.year);

    currdate= add(currdate);

    printf("after adding 45 days to date\n");
    printf("day: %d\n",currdate.day);
    printf("month: %d\n",currdate.month);
    printf("year: %d\n",currdate.year);


    return 0;

}