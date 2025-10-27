class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || s.length() < numRows)
            return s;

        string str = "";
        bool f;
        int pass = (numRows * 2) - 2;

        for (int i = 0; i < numRows; i++) {
            f = true;
            for (int j = i; j < s.length();)
            {
                f =  i < numRows - 1 ? !f : true;
                str.push_back(s.at(j));
                if (i > 0 && f)
                    j += i * 2;
                else if (i < numRows - 1) 
                    j += pass - (i * 2);
            }
        }

        return str;
    }
};