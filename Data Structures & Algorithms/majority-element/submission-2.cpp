class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            if(count==0){
                winner = nums[i];
            }
    
                (nums[i]==winner)?count+=1:count-=1;
            
        }
        return winner;
    }
};