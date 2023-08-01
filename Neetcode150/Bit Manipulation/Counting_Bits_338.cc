class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sum;
        for (int i = 0; i <= n; i++) {
            sum.push_back(__builtin_popcount(i));
        }
        
        return sum;
    }
};