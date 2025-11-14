class Solution {
public:
    int strStr(string haystack, string needle) {
        int ns = needle.size();
        int ms = haystack.size() - ns;
        for (int i = 0; i <= ms; i++) {
            if (needle.at(0) == haystack.at(i)) {
                int j = 1;
                int k = i + 1;
                while (j < ns && needle.at(j) == haystack.at(k)) {
                    j++;
                    k++;
                };
                if (j == ns)
                    return i;
            }
        }
        return -1;
    }
};