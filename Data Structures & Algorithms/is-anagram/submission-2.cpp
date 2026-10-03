class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){return false;}
        int seen[26] = {0};
        for (int i = 0;i<s.size();i++){
            seen[(int)s[i]%26]+=1;
        }
        for (int i = 0;i<t.size();i++){
            seen[(int)t[i]%26]-=1;
        }
        for(int i = 0;i<26;i++){
            if(seen[i]>0){
                return false;
            }
        }

        return true;
    }
};
