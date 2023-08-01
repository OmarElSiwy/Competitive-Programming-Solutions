class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> storage;
        int maximum = 0;
        int lp = 0, rp = 0;
        while (rp < s.length()) {
            if (storage.count(s[rp])) {
                storage.erase(s[lp]);
                lp++;
                continue;
            }
            storage.insert(s[rp]);
            rp++;
            maximum = max(int(storage.size()), maximum);
        }
        return maximum;
    }
};