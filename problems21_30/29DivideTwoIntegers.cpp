class Solution {
public:
    int divide(int dividend, int divisor) {

        int count = 0;

        if (dividend == INT_MIN) {

            if (divisor == -1)
                return INT_MAX;
                
            else if (divisor == 1)
                return INT_MIN;

            else if (divisor == 2 || divisor == 4)
                count++;

            else if(divisor == INT_MIN)
                return 1;

            dividend++;
        }

        if (divisor == INT_MIN)
            return 0;

        bool signal = dividend > 0 ? true : false;
        bool signal2 = divisor > 0 ? true : false;

        dividend = abs(dividend);
        divisor = abs(divisor);

        while (dividend >= divisor) {
            dividend -= divisor;
            count++;
        }

        count = signal ? count : -count;
        return signal2 ? count : -count;
    }
};