#include <stdio.h>

int main() {
    int arr[100], n, i, ele, pos = -1;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &ele);

    for (i = 0; i < n; i++) {
        if (arr[i] == ele) {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at position %d.\n", pos);
    }

    return 0;
}
