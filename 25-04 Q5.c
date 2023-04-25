#include <stdio.h>

float calculateInterest(float principle, float rate, int time, char customerType) {
    if (customerType == 'S') {
        rate = 12.0f;
    } else {
        rate = 10.0f;
    }
    float interest = (principle * rate * time) / 100.0f;
    return interest;
}
int main() {
    float principle, rate, interest;
    int time;
    char customerType;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time in years: ");
    scanf("%d", &time);

    printf("Enter customer type (S for senior citizen, O for other): ");
    scanf(" %c", &customerType);

    interest = calculateInterest(principle, rate, time, customerType);

    printf("Simple interest is: %.2f", interest);

    return 0;
}
