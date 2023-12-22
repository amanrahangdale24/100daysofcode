class Solution {
public:
    int maxScore(string s) {
        int ans = 0 ;
        for(int i = 1  ;i<s.size() ; i++){
            int leftzeros = 0;
            int rightones = 0 ; 

            for(int j = i-1 ; j>=0 ; j--){
                if(s[j]=='0'){
                    leftzeros++ ; 
                }
            }

            for(int k = i ; k<s.size() ; k++){
                if(s[k]=='1'){
                    rightones++ ; 
                }
            }

            ans = max(ans , leftzeros + rightones) ; 
        }

        return ans ; 
    }
};
