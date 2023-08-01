class Solution {
public:
    bool isAnagram(string s, string t) {
        int SChar[26] = {0};
        int size = s.length();
        if (size != t.length()) return false;
        for(int i = 0; i < size; i++) {
            SChar[s[i] - 'a']++;
            SChar[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if (SChar[i] != 0) return false;
        }
        return true;
    }
};