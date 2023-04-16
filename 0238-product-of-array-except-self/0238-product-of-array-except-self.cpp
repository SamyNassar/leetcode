class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> f(l, 1);
        vector<int> s(l, 1);
        vector<int> res(l, 0);
        
        for(int i = 0; i < l-1; i++){
            f[i+1] = nums[i] * f[i];
            s[l-(2+i)] = nums[l-(1+i)] * s[l-(1+i)];
        }
        for(int i = 0; i < l; i++){
            res[i] = f[i] * s[i];
        }
        
        return res;
    }
};