class Solution {
public:
    int myAtoi(string s) {

        if (s.length() == 0)
            return 0;

        int i = 0;
        bool f = false;
        int sl = s.length() - 1;

        for (i; i < sl && s.at(i) == ' '; i++);

        if (s.at(i) == '+' || s.at(i) == '-') {
            f = s.at(i) == '-';
            i++;
        }
            
        else if (s.at(i) < 48 || s.at(i) > 57)
            return 0;

        long ans = 0;
        char c;

        for (i; i < s.length(); i++) {

            c = s.at(i);

            if (c < 48 || c > 57)
                break;

            ans *= 10; 
            ans += c - 48;

            if (ans > INT_MAX || ans < INT_MIN) 
                return f ? INT_MIN : INT_MAX;
        }

        return f ? -ans : ans;
    }
};