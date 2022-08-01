class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
         set<vector<int>> sa;
        for (int i = 0; i < nums.size(); ++i) {
            vector<int> tmp;
            int cnt = 0;
            for (int j = i; j < nums.size(); ++j) {
                tmp.push_back(nums[j]);
                if (nums[j] % p == 0) ++cnt;
                if (cnt > k) break;
                sa.insert(tmp);
            }
        }
        return sa.size();
    }
};
