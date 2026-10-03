class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int, int> numsToIndex;
        numsToIndex.reserve(nums.size());
        for(int i = 0;i<nums.size();i++){
            int difference=target-nums[i];
            if(numsToIndex.find(difference)!=numsToIndex.end()){
                return {numsToIndex[difference], i};
                }
        
        else{
            numsToIndex[nums[i]] = i;
        }

        
        
        }
    }
};
