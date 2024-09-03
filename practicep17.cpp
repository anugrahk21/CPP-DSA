// #include <iostream>
// using namespace std;

// //remove duplicate entries
// int main(){
//     int n;
//     cin>>n; 
//     int arr[n];
//     for(int i=0;i<n;++i){
//         cin>>arr[i];
//     };

//     int nd=0;
//     int nodup[n];
//     for (int i = 0; i < n; ++i) {
//         bool isDuplicate = false;
        
//         // Check if the current element has already appeared in nodup
//         for (int j = 0; j < nd; ++j) {
//             if (arr[i] == nodup[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if(!isDuplicate){
//             nodup[nd++]=arr[i];
//         };

//     };
//     for(int i=0;i<n;++i){
//         cout<<nodup[i]<<" ";
//     };
// };
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input the elements into the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int nd = 0;
    int nodup[n];

    // Loop over the original array
    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;

        // Check if the current element arr[i] is already in nodup array
        for (int j = 0; j < nd; ++j) {
            if (arr[i] == nodup[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add it to nodup array
        if (!isDuplicate) {
            nodup[nd++] = arr[i];
        }
    }

    // Output the array after removing duplicates
    for (int i = 0; i < nd; ++i) {
        cout << nodup[i] << " ";
    }

    return 0;
}
