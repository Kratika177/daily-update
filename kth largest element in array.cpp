class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int N = nums.size();
        sort(nums.begin(),nums.end());
        return nums[N - k];
    }
};
