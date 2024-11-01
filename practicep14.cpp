#include <iostream>
using namespace std;

// You are working on a mathematics application that requires merging two sorted lists of numbers 
// into a single sorted list without any duplicates. 
// Your task is to write a program that performs this merging operation on two lists of numbers.

// Your program should merge the numbers from the first and second lists into a single sorted list,
//  removing any duplicate numbers. The merged list should contain all the unique numbers, arranged in ascending order.

// After merging the lists, your program should output the numbers in the merged list, 
// according to the initial array.

int main() {
    int n, k;

    // Read the size and elements of the first list
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    // Read the size and elements of the second list
    cin >> k;
    int arr2[k];
    for (int i = 0; i < k; ++i) {
        cin >> arr2[i];
    }

    int i = 0, j = 0;

    // Output merged elements in sorted order without duplicates
    while (i < n && j < k) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        } else if (arr1[i] > arr2[j]) {
            cout << arr2[j++] << " ";
        } else {
            cout << arr1[i] << " "; // arr1[i] == arr2[j], so print one of them
            i++;
            j++;
        }
    }

    // Output remaining elements from arr1 (if any)(if one list is larger than the other )
    //anyway its in sorted order so print them
    while (i < n) {
        cout << arr1[i++] << " ";
    }

    // Output remaining elements from arr2 (if any)
    while (j < k) {
        cout << arr2[j++] << " ";
    }

    cout << endl;

    return 0;
}
