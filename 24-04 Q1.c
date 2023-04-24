#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double x, n, result;
    
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter n: ");
    scanf("%lf", &n);
    
    printf("\nAvailable Arithmetic Operators:\n");
    printf("1. Power (x^n)\n");
    printf("2. Addition (x + n)\n");
    printf("3. Subtraction (x - n)\n");
    printf("4. Multiplication (x * n)\n");
    printf("5. Division (x / n)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            result = pow(x, n);
            printf("Result: %lf\n", result);
            break;
        case 2:
            result = x + n;
            printf("Result: %lf\n", result);
            break;
        case 3:
            result = x - n;
            printf("Result: %lf\n", result);
            break;
        case 4:
            result = x * n;
            printf("Result: %lf\n", result);
            break;
        case 5:
            if(n == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = x / n;
                printf("Result: %lf\n", result);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
