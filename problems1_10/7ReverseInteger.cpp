class Solution {
public:
    int reverse(int x) {

        int r = 0;
        int m;
        int last;
        
        if (x > 0) {
            m = INT_MAX;
            last = m % 10;
            m /= 10;

            for (x; x > 9; x /= 10) {
                r *= 10;
                r += x % 10;
            }

            if ((r <= m && x <= last) || r < m)
                return r * 10 + x;
        } 
        else {

            m = INT_MIN;
            last = m % 10;
            m /= 10;

            for (x; x < -9; x /= 10) {
                r *= 10;
                r += x % 10;
            }

            if ((r >= m && x >= last) || r > m)
                return r * 10 + x;
        }

        return 0;
    }
};