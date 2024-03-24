#include <stdio.h>
#include <string.h>

float calculate(char op, float x, float y);

int main(){
    float x, y;
    char op;

    printf("Enter the first Number: ");
    scanf("%f", &x);

    printf("Enter the operator (+, - , *) : ");
    scanf(" %c", &op);

    printf("Enter the second Number: ");
    scanf("%f", &y);

    printf("The Output is %f", calculate(op, x, y));
    return 0;
}


float calculate(char op, float x, float y) {
    switch(op){
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            printf("Unsupported operation.\n");
            return 0;
    }
}
