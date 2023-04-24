#include <stdio.h>

int main() {
    int lines;
    
    printf("Enter the number of lines: ");
    scanf("%d", &lines);
    
    for(int i = 1; i <= lines; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                printf("%d", i);
            }
            else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
