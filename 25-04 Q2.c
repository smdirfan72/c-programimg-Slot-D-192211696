#include <stdio.h>
#include <stdbool.h>

bool isComposite(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return true;
    }

    return false;
}

int main() {
    int arr[100];
    int n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isComposite(arr[i])) {
            count++;
        }
    }

    printf("The number of composite numbers in the array is: %d\n", count);

    return 0;
}
