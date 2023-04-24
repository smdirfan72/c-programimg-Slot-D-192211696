#include <stdio.h>

int main() {
    int num, factorial = 1, i;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Error: Negative integer entered.\n");
        return 1;
    }
    
    for(i = 2; i <= num; i++) {
        factorial *= i;
    }
    
    printf("%d! = %d\n", num, factorial);
    
    return 0;
}
