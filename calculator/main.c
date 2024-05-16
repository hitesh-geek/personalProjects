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
    scanf("\n%c", &options);
    switch (options) {
    case '+' :
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("Value is : %0.2f\n", num1 + num2);
        break;
    case '-':
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("Value is : %0.2f\n", num1 - num2);
        break;
    case '*':
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("Value is : %0.2f\n", num1 * num2);
        break;
    case '/':
        printf("Enter a number: ");
        scanf("%f",&num2);
        printf("Value is : %0.2f\n", num1 / num2);
        break;
    default:
        printf("Invalid options\n");

    }
    return 0;


}

