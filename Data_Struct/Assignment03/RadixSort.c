#include <stdio.h>
#include <string.h>

// Function to find the maximum number of digits
int getMaxDigits(char arr[][15], int n) {
    int maxDigits = strlen(arr[0]);
    for (int i = 1; i < n; i++) {
        int currentDigits = strlen(arr[i]);
        if (currentDigits > maxDigits) {
            maxDigits = currentDigits;
        }
    }
    return maxDigits;
}

// Using counting sort to sort the elements based on significant places
void countingSort(char arr[][15], int n, int exp) {
    const int base = 26; // Assuming English alphabet with 26 characters
    char output[n][15]; // Output array

    int count[base] = {0}; // Initialize count array

    // Store count of occurrences in count[]
    for (int i = 0; i < n; i++) {
        int index = (strlen(arr[i]) >= exp) ? (arr[i][strlen(arr[i]) - exp] - 'a') : 0;
        count[index]++;
    }

    // Change count[i] so that count[i] now contains actual
    // position of this digit in output[]
    for (int i = 1; i < base; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        int index = (strlen(arr[i]) >= exp) ? (arr[i][strlen(arr[i]) - exp] - 'a') : 0;
        strcpy(output[count[index] - 1], arr[i]);
        count[index]--;
    }

    // Copy the output array to arr[], so that arr[] contains
    // sorted numbers according to the current digit
    for (int i = 0; i < n; i++) {
        strcpy(arr[i], output[i]);
    }
}

// Radix Sort
void radixSort(char arr[][15], int n) {
    int maxDigits = getMaxDigits(arr, n);

    // Do counting sort for every digit
    for (int exp = 1; maxDigits / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

// Print an array of strings
void printArray(char arr[][15], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

// Driver program
int main() {
    char arr[][15] = {"apple", "banana", "orange", "grape", "kiwi", "pear"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    radixSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
