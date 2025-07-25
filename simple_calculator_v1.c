#include <stdio.h>
#include <cs50.h>

int main()
{
    float input1;
    float input2;
    char operator;

    printf("This is a 2 digit simple calculator\n");
    input1 = get_float("Enter the first number: ");
    operator = get_char("Enter the operator(+ - * /): ");
    input2 = get_float("Enter the second number: ");

switch(operator)
    {
        case '+':
            printf("result: %f\n", input1 + input2);
            break;
        case '-':
            printf("result: %f\n", input1 - input2);
            break;
        case '*':
            printf("result: %f\n", input1 * input2);
            break;
        case '/':
            printf("result: %f\n", input1 / input2);
            break;
        default:
            printf("Invalid operator\n");
            break;

    }
    return 0;
}
