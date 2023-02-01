class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int len = nums.size();
        vector<int> res, arr[len+1];
                
        for(int num : nums){
            freq[num]++;
        }
        
        for(auto itr:freq){
            arr[itr.second].push_back(itr.first);
            
        }
        
        for(int i = len; i>0; i--){
            if(res.size()>=k) break;
            
            if(arr[i].size() > 0){
                for(int n: arr[i]){
                    if(res.size()>=k) break;
                    res.push_back(n);
                }
            }
        }
        
        return res;
    }
};