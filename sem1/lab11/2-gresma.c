#include <stdio.h>

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    int greatest, smallest;

    if ((*p1 >= *p2) && (*p1 >= *p3))
        greatest = *p1;
    else if ((*p2 >= *p1) && (*p2 >= *p3))
        greatest = *p2;
    else
        greatest = *p3;

    if ((*p1 <= *p2) && (*p1 <= *p3))
        smallest = *p1;
    else if ((*p2 <= *p1) && (*p2 <= *p3))
        smallest = *p2;
    else
        smallest = *p3;

    printf("Greatest number = %d\n", greatest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}