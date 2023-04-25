#include <stdio.h>

int main() {
    int m, n;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &m);
    printf("Enter the number up to which you want to print the multiplication table: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", m);

    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", m, i, m * i);
    }

    return 0;
}
