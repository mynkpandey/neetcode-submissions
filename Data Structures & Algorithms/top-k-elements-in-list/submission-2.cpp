class Solution {
public:
    void findTopk(unordered_map<int, int> &mpp, vector<int> &v) {
        int max_val = -1, max_key = -1;
        for(auto &[key, val] : mpp) {
            if(val > max_val) {
                max_key = key;
                max_val = val;
            }
        }
        v.push_back(max_key);
        mpp.erase(max_key);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> v;
        for(int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        for(int i=0;i<k;i++) {
            findTopk(mpp, v);
        }
        return v;
        
    }
};