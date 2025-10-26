#include<deque>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque<char> d;
        int b = 0;
        int dsize;
        char c;

        for (int i = 0; i < s.length(); i++) {
            c = s.at(i);
            
            d.push_back(c);
            for (int j = 0; j < d.size() - 1; j++){
                if(d.at(j) == c) {
                    d.erase(d.begin(), d.begin() + j + 1);
                    break;
                }
            }

            if (d.size() > b) {
                b = d.size();
            }
        }

        return b;
    }
};