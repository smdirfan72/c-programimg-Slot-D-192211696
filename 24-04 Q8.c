#include <stdio.h>

int main() {
    int P, Q, R;
    
    printf("Enter the value of P: ");
    scanf("%d", &P);
    
    printf("Enter the value of Q: ");
    scanf("%d", &Q);
    
    printf("Enter the value of R: ");
    scanf("%d", &R);
    
    for(int i = P; i <= Q; i++) {
        int num = i;
        int skip = 0;
        
        while(num != 0) {
            int digit = num % 10;
            num /= 10;
            
            if(digit == R) {
                skip = 1;
                break;
            }
        }
        
        if(skip) {
            continue;
        }
        
        printf("%d ", i);
    }
    
    return 0;
}
