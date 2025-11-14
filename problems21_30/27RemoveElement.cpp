class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        int j = nums.size();
        for (int i = 0; i < nums.size() && i < j; i++) {
            if (nums.at(i) == val) {
                j--;
                while(nums.at(j) == val) {
                    nums.at(j) = 51;
                    j--;
                    if (j <= i)
                        return c;
                }
                nums.at(i) = nums.at(j);
                nums.at(j) = 51;
            }
            c++;
        }
        return c;
    }
};