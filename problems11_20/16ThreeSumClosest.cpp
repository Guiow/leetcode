class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int r = INT_MAX;
        int d = INT_MAX;
        int u;
        int b;
        int s;
        int t;

        for (int i = nums.size() - 1; i > 0; i--) {
            b = 0;
            u = i - 1;
            while (b < u) {
                s = nums[b] + nums[u] + nums[i];

                if (s > target)
                    u--;
                else
                    b++;

                t = abs(s - target);
                if (t < d) {
                    d = t;
                    r = s;
                }
            }

            while(i > 0 && nums[i - 1] == nums[i])
                i--;
        }
        return r; 
    }
};