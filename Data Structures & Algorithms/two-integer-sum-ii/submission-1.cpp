auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int pointer1 = 0;
        int pointer2 = n-1;
        while(pointer1<pointer2){
            if(numbers[pointer1]+numbers[pointer2]<target){
                pointer1++;
            }
            else if(numbers[pointer1]+numbers[pointer2]>target){
                pointer2--;
            }
            else{
                return {pointer1+1,pointer2+1};
            }
        }
    }
};
