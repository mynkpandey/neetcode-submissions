class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int count = 0, maxi = -1;
        for(int i=0;i<nums.size();i++) {
            if(st.find(nums[i] - 1) == st.end()) {
                int start = nums[i];
                count = 1;
                while(st.find(start + count) != st.end()) {
                    count++;
                }  
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
