//
//  main.c
//  Calculator-IS home work
//
//  Created by Artur Disha on 7.4.23.
//
#include <stdio.h>
#include <math.h>

// Function to perform addition
float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    return a / b;
}

// Function to find square root
float squareRoot(float num) {
    return sqrt(num);
}

// Function to find power of a number
float power(float base, int exp) {
    float result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

// Main function to get user input and perform operations
int main() {
    int choice;
    float num1, num2, result;
    printf("Select an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            result = add(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            result = divide(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case 5:
            printf("Enter a number to find its square root: ");
            scanf("%f", &num1);
            result = squareRoot(num1);
            printf("Result = %.2f\n", result);
            break;
        case 6:
            printf("Enter a number and its power: ");
            scanf("%f %d", &num1, &choice);
            result = power(num1, choice);
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
