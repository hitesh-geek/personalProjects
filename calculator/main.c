#include <stdio.h>

//main function starts here

int main()
{
    float num1, num2;
    int options;
    printf("\t\t***CALCULATOR***\n");
    printf("Select options to perform operations\n(1) ADD\n(2) SUBTRACT\n(3) MULTIPLY\n(4) DIVISION\n");
    scanf("%d",&options);
    switch (options) {
    case 1:
        printf("Enter two numbers: ");
        scanf("%f%f",&num1,&num2);
        printf("After addition the value is : %0.2f\n", num1 + num2);
        break;
    case 2:
        printf("Enter two numbers: ");
        scanf("%f%f",&num1,&num2);
        printf("After subtraction  the value is : %0.2f\n", num1 - num2);
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%f%f",&num1,&num2);
        printf("After multiplication the value is : %0.2f\n", num1 * num2);
        break;
    case 4:
        printf("Enter two numbers: ");
        scanf("%f%f",&num1,&num2);
        printf("After division the value is : %0.2f\n", num1 / num2);
        break;
    default:
        printf("Invalid options\n");

    }
    return 0;


}

