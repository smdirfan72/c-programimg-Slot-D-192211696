#include <stdio.h>

int main() {
    int arr[100], reverse_arr[100];
    int n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = n-1, j = 0; i >= 0; i--, j++) {
        reverse_arr[j] = arr[i];
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", reverse_arr[i]);
    }
    printf("\n");

    return 0;
}
