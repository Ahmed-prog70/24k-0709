#include <stdio.h>
float calc(float num1, float num2, char opt)
{
    float result;
    switch (opt)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Undefined\n");
            return 0;
        }
        break;
    default:
        printf("Invalid opt.\n");
        return 0;
    }
    return result;
}
int main()
{
    float number1, number2;
    char opt;
    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f", &number2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &opt);
    float result = calc(number1, number2, opt);
    printf("Result: %.2f\n", result);
    return 0;
}
