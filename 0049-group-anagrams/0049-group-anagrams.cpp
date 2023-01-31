class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> anagrams;
        vector<vector<string>> res;
        
        for(int i = 0; i < strs.size(); i++){
            string curr = strs[i];
            sort(curr.begin(), curr.end());
            anagrams[curr].push_back(i);
        }
        
        for(auto itr = anagrams.begin(); itr != anagrams.end(); itr++){
            vector<int> v = itr->second;
            vector<string> temp;
            for(int i : v){
                temp.push_back(strs[i]);
            }
            res.push_back(temp);
        }
        return res;
    }
};