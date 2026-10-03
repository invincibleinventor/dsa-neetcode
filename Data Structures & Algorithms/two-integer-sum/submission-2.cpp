class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> numsToIndex;
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
