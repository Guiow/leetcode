#include<map>

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> rm = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int num = 0;

        for (int i = 0; i < s.length() - 1; i++) {
            if (rm[s.at(i)] < rm[s.at(i + 1)])
                num -= rm[s.at(i)];
            else 
                num += rm[s.at(i)];
        }
        
        return num + rm[s.at(s.length() - 1)];
    }
};