#include <stdio.h>

void findOccurrences(int arr[], int n, int x) {
    int firstOccurrence = -1, lastOccurrence = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            if (firstOccurrence == -1) {
                firstOccurrence = i;
            }
            lastOccurrence = i;
        }
    }

    printf("Output: %d %d\n", firstOccurrence, lastOccurrence);
}

int main() {
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &x);

    findOccurrences(arr, n, x);

    return 0;
}

