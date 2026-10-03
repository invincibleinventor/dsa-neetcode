class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int pointer = 0;
        int l = nums.size();
        int stacktop = l-1;
        while(pointer<=stacktop){
            if(nums[pointer]==val){
                int temp = nums[pointer];
                nums[pointer] = nums[stacktop];
                nums[stacktop] = temp;
                stacktop--;
                count++;
            }else{
            pointer++;
            }
        }
    
            
            return l-count;
    }
};