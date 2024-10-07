#include <iostream>
using namespace std;

// Function to perform linear search
int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return index if target is found
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {8, 2, 4, 1, 3};             // Array to search in
    int target = 4;                        // Element to search for
    int size = sizeof(arr) / sizeof(arr[0]);   // Calculate the size of the array
   
    // Function call
    int result = search(arr, size, target);
    
    // Output the result
    if (result == -1) {
        cout << "Element is not present in the array" << endl;
    } else {
        cout << "Element is present at index: " << result << endl;
    }

    return 0;
}
