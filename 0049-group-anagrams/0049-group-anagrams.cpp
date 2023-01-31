class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> res;
        
        for(int i = 0; i < strs.size(); i++){
            string curr = strs[i];
            sort(curr.begin(), curr.end());
            anagrams[curr].push_back(strs[i]);
        }
        
        for(auto it : anagrams){
            res.push_back(it.second);
        }
        return res;
    }
};