class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for (int i = 0; i < nums.size(); i++) {
            if (frequency.find(nums[i]) != frequency.end()) {
                frequency.at(nums[i])++;
            } else {
                frequency.insert({nums[i], 1});
            }
        }
        
        vector<pair<int, int>> ans;
        for (auto it = frequency.begin(); it != frequency.end(); it++) {
            ans.push_back(make_pair(it->second, it->first));
        }
        
        sort(ans.begin(), ans.end(), greater<>());
        
        vector<int> finals;
        for (int i = 0; i < k; i++) {
            finals.push_back(ans[i].second);
        }
        
        return finals;
    }
};