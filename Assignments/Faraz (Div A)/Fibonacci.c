#include <stdio.h>
    
    int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
        
}
    int main(){  
     
    printf("Aim: WAP to print fibonnaci series using recursion\n\n\n");
    printf("Full Name\t: Mohammad Faraz\n");
    printf("Roll no.\t: 251749\n");
    printf("Division\t: A\n");
    printf("Batch\t\t: A3\n");
    printf("Branch\t\t: AIML\n");
    printf("Subject\t\t: C Programming\n\n");

    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}