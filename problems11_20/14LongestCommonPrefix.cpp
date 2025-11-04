class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs.at(0);
        string nres = "";
        int c = 0;

        for (string str : strs) {
            while(c < res.length() && c < str.length() && str.at(c) == res.at(c)) {
                nres += str.at(c);
                c++;
            }
            res = nres;
            nres = "";
            c = 0;
        }
        return res;
    }
};