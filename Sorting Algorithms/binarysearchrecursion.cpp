//🔁 IBinary Search (using a recurcion)

#include <stdio.h>
int binarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, right, key);
    else
        return binarySearch(arr, left, mid - 1, key);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", result);

    return 0;
}
