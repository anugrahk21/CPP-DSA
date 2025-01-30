#include <iostream>
using namespace std;

//Longest Substring Without Repeating Characters
//Time complexity: O(n)
//Space complexity: O(1)
//the problem for example is

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        int index[128] = {0};
        for (int i = 0, j = 0; j < n; j++) {
            i = max(index[s[j]], i);
            ans = max(ans, j - i + 1);
            index[s[j]] = j + 1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
    cout << s.lengthOfLongestSubstring("aaaa") << endl;
    return 0;
}