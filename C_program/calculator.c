// Calculator(arithemetic) with c program
#include <stdio.h>

int main() {
    char operator;
    printf("Enter an operator ['+', '-', '*', '/']  ");
    scanf("%c", &operator);
    
    double number1, number2;
     printf("Enter Number1: ");
    scanf("%lf", &number1);
    
    printf("Enter Number2: ");
    scanf("%lf", &number2);
    
    double result;
    
    switch(operator){
        case '+':
        result = number1 + number2;
        printf("ANSWER: %.2lf", result);
        break;
        
        case '-':
        result = number1 - number2;
        printf("ANSWER: %.2lf", result);
        break;
        
        case '*':
        result = number1 * number2;
        printf("ANSWER: %.2lf", result);
        break;
        
        case '/':
        result = number1 / number2;
        printf("ANSWER: %lf", result);
 :       break;
        
        default:
        printf("ERROR! Invalid Operator");
    }

    return 0;
}
