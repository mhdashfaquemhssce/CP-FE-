/*
    Expt 3 - Task 1
    Module 2 : Control Structures Switch
    Aim: WAP to design a menu driven calculator using 
        switch statement.

     NAME: SHAIKH MOHD ASHFAQUE
    BRANCH: AIML
    DIV: A
    SUBJECT: C PROGRAMMING
    ROLL-NO: 1234
*/

#include<stdio.h>


int main(){
    float num1,num2,result;
    int mod_result;
    char operator;

    printf("\t\t\t *** Calculator *** \n\n");
    printf("\t Operations : \n");
    printf("\t\t + : Addition\n");
    printf("\t\t - : Subtraction\n");
    printf("\t\t * : Multiplication\n");
    printf("\t\t / : Division\n");
    printf("\t\t %% : Modulus\n\n");

    repeat:

    printf("Enter First Operand:");
    scanf("%f", &num1);
    printf("Enter Second Operand:");
    scanf("%f", &num2);
    printf("Enter Operation:");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f", num1, num2, result);
            break;
        case '/':
            if(num2 == 0){
                printf("Cannot divide by Zero");
                break;
            }
            result = num1 / num2;
            printf("%.1f / %.1f = %.1f", num1, num2, result);
            break;
        case '%':
            mod_result = (int)num1 % (int)num2;
            printf("%.0f %% %.0f = %d", num1, num2, mod_result);
            break;
        
        default:
            printf("Invalid Operator. Try Again.");
            break;
    }

    printf("\nContinue? (Y/N) : ");
    scanf(" %c", &operator);
    if(operator == 'N' || operator == 'n'){
        printf("Thank you for using Calculator");
        return 0;
    }

    printf("\n\n");
    goto repeat;

    return 0;
}

/* OUTPUT

                         *** Calculator *** 

         Operations :
                 + : Addition
                 - : Subtraction
                 * : Multiplication
                 / : Division
                 % : Modulus

Enter First Operand:4
Enter Second Operand:5
Enter Operation:*
4.0 * 5.0 = 20.0
Continue? (Y/N) : y


Enter First Operand:3
Enter Second Operand:4
Enter Operation:%
3 % 4 = 3
Continue? (Y/N) : n
Thank you for using Calculator

*/