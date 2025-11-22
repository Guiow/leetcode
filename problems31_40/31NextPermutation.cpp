class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int last = nums.size() - 1;

        if (!last)
            return;

        while (last > 0 && nums.at(last - 1) >= nums.at(last)) {
            last--;
        }
        
        if (!last) {
            sort(nums.begin(), nums.end());
            return;
        }
    
        int bIndex = last - 1;
        int bigger = nums.size() - 1;
        
        while (bigger != last) {
            if (nums.at(bigger) > nums.at(bIndex)) 
                break;
            bigger--;
        }

        int t = nums.at(bIndex);
        nums.at(bIndex) = nums.at(bigger);
        nums.at(bigger) = t;

        sort(nums.begin() + (last), nums.end());
    }
};