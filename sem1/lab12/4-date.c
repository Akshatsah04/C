#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            return 31;
        case 4: 
        case 6: 
        case 9: 
        case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

void addDays(struct Date *d, int daysToAdd) {
    while (daysToAdd > 0) {
        int daysInCurrentMonth = getDaysInMonth(d->month, d->year);
        int remainingDaysInMonth = daysInCurrentMonth - d->day;

        if (daysToAdd <= remainingDaysInMonth) {
            d->day += daysToAdd;
            daysToAdd = 0;
        } else {
            daysToAdd -= (remainingDaysInMonth + 1);
            d->day = 1;
            d->month++;

            if (d->month > 12) {
                d->month = 1;
                d->year++;
            }
        }
    }
}

int main() {
    struct Date current;

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &current.day, &current.month, &current.year);

    addDays(&current, 45);
    printf("Date after adding 45 days: %02d-%02d-%04d\n", current.day, current.month, current.year);

    return 0;
}