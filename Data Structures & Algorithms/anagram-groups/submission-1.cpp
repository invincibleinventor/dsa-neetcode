class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> maps;
        vector<vector<string>> result;
        for(int i = 0;i<strs.size();i++){
            vector<int> seen(26);
            for(int j = 0;j<strs[i].length();j++){
                seen[(int)strs[i][j]-'a']+=1;
            }
            string a="";
            for(int i = 0;i<26;i++){
                a+=to_string(seen[i])+'#';
            }
                vector<int> ns = maps[a];
                ns.push_back(i);
                maps[a] = ns;
           
            
        }
for (const auto& [key, value] : maps) {
        vector<string> ss;
        for(int i = 0;i<value.size();i++){
            ss.push_back(strs[value[i]]);
        }
        result.push_back(ss);
    }
return result;
    }
};
