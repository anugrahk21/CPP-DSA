#include <iostream>
using namespace std;
//sort and remove duplicates
int main() {
    int n;
    cin >> n;  // Read the size of the array
    int arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Implementing Bubble Sort to sort the array manually
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Removing duplicates manually
    int new_size = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr[i] != arr[new_size - 1]) {
            arr[new_size++] = arr[i];  // Only add unique elements
        }
    }

    // Print the sorted array with duplicates removed
    for (int i = 0; i < new_size; ++i) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}

