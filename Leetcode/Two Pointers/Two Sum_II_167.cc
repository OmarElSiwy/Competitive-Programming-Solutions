class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        while (left < right) {
            int n = numbers[left] + numbers[right];
            if (n==target) {
                return vector<int>{left+1, right+1};
            }
            n > target ? right-- : left++;
        }
        
        return numbers;
    }
};