class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> storage;
        vector<vector<string>> temp;
        for (auto &c : strs) {
            string t = c;
            sort(t.begin(), t.end());
            if (!storage.count(t)) {storage.insert({t, {c}});}
             else {storage.at(t).push_back(c);}
        }
        
        for (auto &c : storage) {
            temp.push_back(c.second);
        }
        
        return temp;
    }
};