#include <iostream>
using namespace std;

//You are required to print a Zigzag pattern using stars (*). The Zigzag pattern alternates between printing stars in a left-aligned and right-aligned pattern on each line. The pattern repeats for n rows. No need to Get Confused its just spaces.

// Hint: Do you see difference in odd and even lines.

// Input Format

// An integer n (1 ≤ n ≤ 50) representing the number of rows for the Zigzag pattern.

// Constraints

// 1≤n≤50

// n is an integer, and the input will always be a valid integer. You are to print the pattern as specified, without any additional spaces or newlines.

// Output Format

// Print the Zigzag pattern where the stars (*) are arranged in alternating left and right aligned rows.

// Sample Input 0

// 3
// Sample Output 0

// *   *   *
//   *   *   *
// *   *   *
// Sample Input 1

// 4
// Sample Output 1

// *   *   *   *   
//   *   *   *   * 
// *   *   *   *   
//   *   *   *   * 

#include <iostream>

using namespace std;

int pattern1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    pattern1(n);
    return 0;
}
