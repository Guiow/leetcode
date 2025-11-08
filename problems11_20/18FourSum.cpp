class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vs;

        for (int i = nums.size() - 1; i > 2; i--)
            for (int j = 0; j < i; j++)
                verifySums(vs, nums, i, j, target);

        sort(vs.begin(), vs.end());
        auto l = unique(vs.begin(), vs.end());
        vs.erase(l, vs.end());
        return vs;
    }

    void verifySums(vector<vector<int>>& vs, vector<int>& nums, int i, int j, int target) {
        int b = j + 1;
        int u = i - 1;
        long s;

        while (b < u) {
            s = long(nums[j]) + nums[b] + nums[u] + nums[i];
            if (s == target)
                vs.push_back({nums[j], nums[b], nums[u], nums[i]});

            if (s > target)
                u--;
            else
                b++;
        }
    }
};