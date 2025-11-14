class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums.at(i) == nums.at(i + 1))
            {
                c++;
                nums.at(i) = 101;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - c;
    }
};