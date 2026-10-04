class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>arr(k);
        array<int , 2001> numbs{};

       for(int x : nums){
        numbs[x + 1000]++;
       }
       for(int i = k; i >0;i--){
        int* mx = max_element(numbs.begin(), numbs.end());
       int  n = mx - numbs.begin();
        n -= 1000;
        arr[i-1]=n;
        *mx= -1;
       }
       return arr;
    }
};
