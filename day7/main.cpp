class Solution {
public:
    int lengthOfLastWord(string s) {
        int final = 0 ;
        int temp = s.size() -1;
        for(int i = s.size()-1 ;i>=0 ; i--){
            if(s[i]!=' '){
                temp = i ; 
                break;
            }
        }

        for(int j = temp ; j>=0 ;j--){
            if(s[j]!=' '){
                final++ ; 
            }
            else{
                break ; 
            }
        }

        return final ;
    }
};
