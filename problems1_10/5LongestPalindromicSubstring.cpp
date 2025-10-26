using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string w = s.substr(0, 1);
        int b = 0;
        int u = 0;
        int l = INT_MIN;
        int f = s.length();

        for (int i = 0; i < f; i++) {
            for (int j = f - 1; j > i; j--) {
                if (s.at(i) == s.at(j)) {
                    u = j;
                    b = i;
                    
                    for (int k = 1; s.at(b) == s.at(u) && b < u; k++) {
                        b++;
                        u--;
                    }

                    if (b >= u && l <= j - i) {
                        w = s.substr(i, j - i + 1);
                        l = w.length();
                    }
                }
            }
        }

        return w;
    }
};