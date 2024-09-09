#include <iostream>
using namespace std;

//sort and merge 2 arrays without duplicates

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

    // Bubble Sort for arr1
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    // Bubble Sort for arr2
    for (int i = 0; i < k - 1; ++i) {
        for (int j = 0; j < k - i - 1; ++j) {
            if (arr2[j] > arr2[j + 1]) {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    // Remove duplicates from arr1
    int uniqueArr1[n];
    int uniqueSize1 = 0;

    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            uniqueArr1[uniqueSize1++] = arr1[i];
        }
    }

    // Remove duplicates from arr2
    int uniqueArr2[k];
    int uniqueSize2 = 0;

    for (int i = 0; i < k; ++i) {
        if (i == 0 || arr2[i] != arr2[i - 1]) {
            uniqueArr2[uniqueSize2++] = arr2[i];
        }
    }

    // Merge uniqueArr1 and uniqueArr2 without duplicates
    int i = 0, j = 0;
    while (i < uniqueSize1 && j < uniqueSize2) {
        if (uniqueArr1[i] < uniqueArr2[j]) {
            cout << uniqueArr1[i++] << " ";
        } else if (uniqueArr1[i] > uniqueArr2[j]) {
            cout << uniqueArr2[j++] << " ";
        } else {
            cout << uniqueArr1[i] << " ";  // Both are equal
            i++;
            j++;
        }
    }

    // Output remaining elements from uniqueArr1
    while (i < uniqueSize1) {
        cout << uniqueArr1[i++] << " ";
    }

    // Output remaining elements from uniqueArr2
    while (j < uniqueSize2) {
        cout << uniqueArr2[j++] << " ";
    }

    cout << endl;

    return 0;
}
