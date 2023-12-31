class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
          
        int ans = -1 ;
        for( int i = 0 ; i<s.size() ; i++){
            for(int j = s.size()-1 ; j>i ; j--){
                if(s[i] == s[j]){
                    int val = j -i -1 ; 
                    ans = max(val , ans) ; 
                }
            }
        }
        return ans ; 
    }
};
