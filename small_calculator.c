#include <stdio.h>
#include<math.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("\n1) add");
    printf("\n2) multiplication");
    printf("\n3) division");
    printf("\n4) subtraction");
    printf("\n5) square");

    printf("\n enter a number for choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 + num2;
        printf("\nresult=%f", result);
    } 
    else if (choice == 2) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 * num2;
        printf("\nresult=%f", result);
    } 
    else if (choice == 3) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        if (num2 != 0) {
            result = num1 / num2;
            printf("\nresult=%f", result);
        } else {
            printf("\nError: Division by zero");
        }
    } 
    else if (choice == 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 - num2;
        printf("\nresult=%f", result);
    } 
    else if (choice == 5) {
        printf("enter a number for square: ");
        scanf("%f", &num1);
        result = num1 * num1;
        printf("\nthis is your number square:%f", result);
    } 
    else {
        printf("\nyou are wrong enter a valid value");
    }

    return 0;
}