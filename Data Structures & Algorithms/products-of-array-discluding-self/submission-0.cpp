class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftprod(n, 1), rightprod(n, 1);
        int left = 1, right = 1;
        for(int i=1;i<n;i++) {
            leftprod[i] = nums[i-1] * left;
            left *= nums[i-1];
        }
        for(int i = n - 2; i >= 0; i--) {
            rightprod[i] = nums[i + 1] * right;
            right *= nums[i + 1];
        }
        for(int i = 0; i < n; i++) {
            nums[i] = leftprod[i] * rightprod[i];
        }
        return nums;
    }
};
