class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unique(nums.begin(), nums.end());
        int prev = 1e6;
        int counter = 1, maxs = 0;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if ((*it)-1 == prev) {
                counter++;
            } else {
                if (counter > 1) {
                    counter = 1;
                }
            }
            maxs = max(counter, maxs);
            prev = *it;
        }
        
        return maxs;
    }
};