class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> order;
        for (const int value : nums) {
            if (order[value] >= 1) return true;
            order[value]++;
        }
        return false;
    }
};