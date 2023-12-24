#include <stdio.h>

void findSecondLargest(int arr[], int n) {
    int firstLargest = -1, secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != -1) {
        printf("Output: %d\n", secondLargest);
    } else {
        printf("Output: No second largest element found.\n");
    }
}

int main() {
    int N;

    // Input
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int Arr[N];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }
    findSecondLargest(Arr, N);

    return 0;
}

