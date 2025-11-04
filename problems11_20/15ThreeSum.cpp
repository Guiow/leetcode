class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vnums;
        int u;
        int b;

        for (int i = nums.size() - 1; i > 0; i--) {
            b = 0;
            u = i - 1;
            while (b < u) {
                
                if (nums[b] + nums[u] == -nums[i]) {
                    vnums.push_back({nums[b], nums[u], nums[i]});
                }
                    
                if (nums[b] + nums[u] > -nums[i])
                    u--;
                else
                    b++;
            }
            while(i > 0 && nums[i - 1] == nums[i])
                i--;
        }
        auto l = unique(vnums.begin(), vnums.end());
        vnums.erase(l, vnums.end());
        return vnums;
    }
};