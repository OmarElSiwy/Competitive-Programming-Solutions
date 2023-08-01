class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> newnums;
        int size = nums.size();
        newnums.reserve(size);
        int accumalative = 1;
        for (int i = 0; i < size; i++) {
            newnums.push_back(accumalative);
            accumalative*=nums[i];
        }
        int rp = 1;
        for (int i = size-1; i >= 0; i--) {
            newnums[i]*=rp;
            rp*=nums[i];
        }

        return newnums;
    }
};