class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()>0){
        int length=strs[0].length();
        
        for(int i = 0;i<strs.size();i++){
            if(strs[i].length()<length){length = strs[i].length();}
        }
        
        int window = 0;
        while(window<length){
            char recent = strs[0][window];
            for(int i =0;i<strs.size();i++){
                if (strs[i][window]!=recent) return strs[0].substr(0,window);
            }
            window++;
        }
        return strs[0].substr(0,window);
    }
    else{
        return "\0";
    }
    }
    
};