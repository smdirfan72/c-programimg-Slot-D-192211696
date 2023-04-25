#include <stdio.h>

int main() {
    int arr[100];
    int n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            count++;
        }
    }

    printf("The number of negative numbers in the array is: %d\n", count);

    return 0;
}
