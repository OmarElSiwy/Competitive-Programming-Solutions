class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        unordered_map<int, int> storage;
        for (int i = 0; i < nums.size(); i++) {
            storage.insert({nums[i], i});
            if (storage.find(target-nums[i]) != storage.end() && storage.at(target-nums[i]) != i) {
                answer.push_back(i); answer.push_back(storage.at(target-nums[i]));
                break;
            }
        }
        
        return answer;
    }
};