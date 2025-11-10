class Solution {
public:
    void generateParentheses(vector<string>& vstr, string s, int n, int op, int cp) {

        if (op == n) {
            n *= 2;
            for (int l = s.size(); l < n; l++)
                s += ")";
            vstr.push_back(s);
            return;
        }

        generateParentheses(vstr, s + "(", n, op + 1, cp);
        if (cp < op)
            generateParentheses(vstr, s + ")", n, op, cp + 1);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> vstr;
        generateParentheses(vstr, "(", n, 1, 0);
        return vstr;
    }
};