class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counter;
        for(int i = 0;i<nums.size();i++){
            counter[nums[i]]=counter[nums[i]]+1;
        }
        int result=0;
        for(auto& kv: counter){
            if(kv.second>nums.size()/2) result =kv.first;
        }
return result;
    }
};