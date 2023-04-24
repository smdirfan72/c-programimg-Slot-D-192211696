#include <stdio.h>

int main() {
    int num, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(num < 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d is a factor of %d.\n", i, num);
            sum += i;
        }
    }
    
    printf("Sum of factors: %d\n", sum);
    
    return 0;
}
