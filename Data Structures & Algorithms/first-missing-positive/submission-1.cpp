class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> store(nums.size()+1);
        int n = nums.size();int lookup = 0;
        int i = 0;
        while(i<n){
            if(nums[i]>0 && nums[i]<n+1){
            store[nums[i]-1]=1;
            }
            i++;
        }
        int result = 1;
        for(int i = 0;i<n+1;i++){
            if(store[i]==1){
                result+=1;
            }
            if(store[i]==0){
                break;
            }
        }
        return result;
    }
};