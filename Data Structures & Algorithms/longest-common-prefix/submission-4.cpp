class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string str1 = strs.front();
        string str2 = strs.back();
        int length = str1.length()>str2.length() ? str2.length() : str1.length();
        int window = 0;
        while(window<length){
            if(str1[window]!=str2[window]){
                return str1.substr(0,window);
            }
            window++;
        }
        return str1.substr(0,window);
    }
    
};