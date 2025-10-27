class Solution {
public:
    bool isPalindrome(int x) {
        
        if ( x < 0)
            return false;

        int c = x;
        long r = 0;

        for (c; c > 0; c /= 10) {
            r *= 10;
            r += c % 10;
        }

        return r == x;
    }
};