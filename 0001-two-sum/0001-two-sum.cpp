class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> n;
        for(int i = 0; i < nums.size(); i++){
            n.insert(pair<int, int>(nums[i], i));
        }
        
        auto l = n.begin();
        auto r = n.rbegin();
        vector<int> res;
        
        while(l->second!=r->second){
            if(l->first + r->first < target) l++;
            else if (l->first + r->first > target) r++;
            else {
                res.push_back(l->second);
                res.push_back(r->second);
                break;
            }
        }
        return res;
    }
};