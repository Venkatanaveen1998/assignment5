#include <stdio.h>

int main() {
    char choice;
    double n1, n2;
    printf("Enter an choice a for addition , s for subtraction : ");
    scanf("%c", &choice);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
    switch(choice)
    {
        case 'a':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case 's':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        default:
            printf("no action");
    }
}
