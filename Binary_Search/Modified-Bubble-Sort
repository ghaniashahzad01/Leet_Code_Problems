#include <iostream>
using namespace std;

// Function template for modified bubble sort
template <typename T>
void modifiedBubbleSort(T arr[], int size) {
    bool swapped;  // To track if any swap occurred in the current pass
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        // Inner loop to compare adjacent elements
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in the wrong order
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;  // A swap occurred
            }
        }
        // If no swaps were made in this pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Test program
int main() {
    // Test with an array of integers
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Original array: ";
    printArray(intArray, intSize);

    modifiedBubbleSort(intArray, intSize);

    cout << "Sorted array: ";
    printArray(intArray, intSize);

    // Test with an array of floating-point numbers
    double doubleArray[] = {64.5, 34.2, 25.1, 12.7, 22.6, 11.5, 90.8};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "\nOriginal float array: ";
    printArray(doubleArray, doubleSize);

    modifiedBubbleSort(doubleArray, doubleSize);

    cout << "Sorted float array: ";
    printArray(doubleArray, doubleSize);

    return 0;
}
