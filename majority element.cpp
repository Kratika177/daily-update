//majority element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int maxa=0;
        for(auto z:mp){
            maxa=max(maxa,z.second);
        }
        for(auto i:mp){
            if(i.second==maxa){
                return i.first;
            }
        }
        return -1;
    }
};
