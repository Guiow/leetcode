class Solution {
public:
    void addLetter(vector<string>& vstr, map<char, string>& mstr, string& digits, string s, int a) {
        if (a == digits.size()) {
            vstr.push_back(s);
            return;
        }

        for (char c : mstr.at(digits.at(a)))
            addLetter(vstr, mstr, digits, s + c, a + 1);
    }

    vector<string> letterCombinations(string digits) {
        map<char, string> mstr = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}};
        vector<string> vstr;
        addLetter(vstr, mstr, digits, "", 0);
        return vstr;
    }
};