#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(age < 18) {
        printf("You are not eligible to vote.\n");
        printf("You have %d years left to be eligible to vote.\n", 18 - age);
    }
    else {
        printf("You are eligible to vote.\n");
    }
    
    return 0;
}
