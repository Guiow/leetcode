class Solution {
public:
    int maxArea(vector<int>& height) {
        int u = height.size() - 1;
        int b = 0;
        int max = INT_MIN;
        int acc;

        while (u > b) {

            acc = min(height.at(u), height.at(b)) * (u - b);
            if (acc > max)
                max = acc;

            if (height.at(b) > height.at(u))
                u--;
            else
                b++;
        }

        return max;
    }
};