#include <stdio.h>

//main function starts here

int main()
{
    int num1, num2;
    char options;
    printf("\t\t***CALCULATOR***\n");
    printf(">");
    scanf("%d%c%d",&num1, &options, &num2);
    switch (options) {
    case '+' :
        printf("=%0.2f\n",(float)num1 + num2);
        break;
    case '-':
        printf("=%0.2f\n", (float)num1 - num2);
        break;
    case '*':
        printf("=%0.2f\n", (float)num1 * num2);
        break;
    case '/':
        printf("=%0.2f\n", (float)num1 / num2);
        break;
    case '%':
        printf("=%d\n",num1 % num2);
        break;
    default:
        printf("Invalid Operator\n");

    }
    return 0;


}

