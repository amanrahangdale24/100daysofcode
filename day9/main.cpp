class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char indvalue = ' ' ; 
        string FinalAns = "";
        for(int i = 0 ; i < strs[0].size() ; i++){
            indvalue = strs[0][i];
            for(int j = 0 ; j<strs.size() ; j++){
                if(indvalue != strs[j][i] ){
                    return FinalAns ; 
                }
            }
            FinalAns += indvalue ; 
        }
        return FinalAns; 
    }
};
