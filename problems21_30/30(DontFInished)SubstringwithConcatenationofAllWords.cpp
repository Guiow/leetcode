class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> v;

        if (s.size() < words.at(0).size() * words.size())
            return v;

        unordered_map<string, bool> mstr;
        string str;

        // bar foo the
        // map -- [bar foo the] --[bar the foo] -- [foo the bar] -- [foo bar the] -- [the bar foo] -- [the ]
        // str = bar foo the
        // i = 2     k = 1    j = 0    p = 0
        // 
        for (int i = 0; i < words.size(); i++) {
            
            for (int k = 0; k < words.size(); k++) {

                if (k == i)
                    continue;

                str = words.at(i);

                for (int j = k % words.size(), p = 0; p < words.size(); p++) {

                    if (j != i)
                        str += words.at(j);

                    j = (j + 1) % words.size();
                }

                mstr[str] = true;
            }
        }


        int b = 0;
        int u = words.size() * words.at(0).size();

        while (b <= s.size() - u) {
            if (mstr[s.substr(b, u)])
                v.push_back(b);
            b++;
        }

        return v;
    }
};


class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> v;

        if (s.size() < words.at(0).size() * words.size())
            return v;

        unordered_map<string, int> mstr;


        for (int i = 0; i < words.size(); i++) 
            mstr[words.at(i)]++;
        
        int b = 0;
        int ws = words.at(0).size();
        int u = words.size() * ws;
        bool f;
        int i;
        int m;
        
        string str;

        while (b <= s.size() - u) {
            f = true;
            unordered_map<string, int> copy_map(mstr);

            for (i = b, m = u + b; i < m; i += ws) {
                str = s.substr(i, ws);
                if (mstr.find(str) != mstr.end()) {
                    if (copy_map[str] == 0) {
                        f = false;
                        break;
                    }
                    else 
                        copy_map[str]--;
                }
                else {
                    f = false;
                    break;
                }
            }

            if (f) 
                v.push_back(b);
            b++;
        }

        return v;
    }
};