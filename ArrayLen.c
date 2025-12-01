#include <stdio.h>

/* Name: Adi Baluch
 Roll No: 11
 UIN: 25IP012
 Division: C
 */

int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Largest element: %d\n", findLargest(arr, n));

    return 0;
}
