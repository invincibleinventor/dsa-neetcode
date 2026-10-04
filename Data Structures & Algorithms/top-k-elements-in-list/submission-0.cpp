class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashes;
        vector<int> result;
        for(int i = 0;i<nums.size();i++){
            hashes[nums[i]]+=1;
        }
vector<pair<int, int>> hashvec(hashes.begin(), hashes.end());
        sort(hashvec.begin(), hashvec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; 
        });
        int j = k;
        for(auto& hash: hashvec){
            if(j == 0){break;}
            result.push_back(hash.first);
            j--;
        }
return result;

    }
    
};
