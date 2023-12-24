#include <stdio.h>

int isPairSum(int arr[], int n, int X) {
    int hash[10000] = {0}; 

    for (int i = 0; i < n; i++) {
        int complement = X - arr[i];

        if (hash[complement] == 1) {
            return 1; 
        }

        hash[arr[i]] = 1;
    }

    return 0; 
}

int main() {
    int N, X;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int Arr[N];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &X);

    if (isPairSum(Arr, N, X)) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }

    return 0;
}

