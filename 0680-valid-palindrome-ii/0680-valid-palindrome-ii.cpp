class Solution {
public:
    bool isPalindromeRange(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            ++left;
            --right;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = (int)s.size() - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                ++i;
                --j;
            } else {
                return isPalindromeRange(s, i + 1, j) || isPalindromeRange(s, i, j - 1);
            }
        }
        return true;
    }
};