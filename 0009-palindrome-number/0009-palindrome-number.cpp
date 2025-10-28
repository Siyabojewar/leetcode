class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int orig = x;
        int rev = 0;

        while (orig > 0) {
            int digit = orig % 10;
            if (rev > (INT_MAX - digit) / 10) {
                return false;
            }

            rev = rev * 10 + digit;
            orig /= 10;
        }

        return rev == x;
    }
};