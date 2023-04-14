#include<stdio.h>
#include<limits.h>

int minJumps(int arr[], int n)
{
    if (n <= 1)
        return 0;

    int max_reach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            return jumps;

        max_reach = (max_reach > i + arr[i]) ? max_reach : i + arr[i];

        steps--;

        if (steps == 0) {
            jumps++;

            if (i >= max_reach)
                return -1;

            steps = max_reach - i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum number of jumps required to reach end is %d\n", minJumps(arr, n));
    return 0;
}
