class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (auto &c : s) {
            if ('a' <= c && c <= 'z' || '0' <= c && c <= '9') {
                t+=c;
            } else if (c <= 'Z' && c >= 'A') {
                t+=((c - 'A') + 'a');
            }
        }
        
        int left = 0, right = t.length()-1;
        while (left < right) {
            if (t[left] != t[right]) {
                return false;
            } 
            left++; right--;
        }
        return true;
    }
};