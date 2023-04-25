#include <stdio.h>

void add(int *x, int *y, int *sum) {
    *sum = *x + *y;
}

int main() {
    int a, b, c, *p, *q, *r;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;
    r = &c;

    add(p, q, r);

    printf("Sum = %d\n", *r);

    return 0;
}
