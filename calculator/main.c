#include <stdio.h>

//main function starts here

int main()
{
    float num1, num2;
    char options;
    printf("\t\t***CALCULATOR***\n");
    printf("Enter a number: ");
    scanf("%f",&num1);
    printf("(+) ADD\t\t(-) SUBTRACT\t\t(*) MULTIPLY\t\t(/) DIVISION\n");
    scanf("%c",&options);
    switch (options) {
    case '+' :
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("After addition the value is : %0.2f\n", num1 + num2);
        break;
    case '-':
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("After subtraction  the value is : %0.2f\n", num1 - num2);
        break;
    case '*':
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("After multiplication the value is : %0.2f\n", num1 * num2);
        break;
    case '/':
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("After division the value is : %0.2f\n", num1 / num2);
        break;
    default:
        printf("Invalid options\n");

    }
    return 0;


}

