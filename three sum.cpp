//three sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> l;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                for(int k=j;k<nums.size();k++){
                    if((nums[i]+nums[j]+nums[k]==0) && i!=j && i!=k && j!=k){
                        vector<int> l2;
                        l2.push_back(nums[i]);
                        l2.push_back(nums[j]);
                        l2.push_back(nums[k]);
                        if(find(l.begin(), l.end(),l2)==l.end()){
                            l.push_back(l2);
                        }
                    }
                }
                
            }
        }
        return l;
    }
};
