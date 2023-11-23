class Solution {
public:
    bool canWinNim(int n) {
        int a = n ; 
        int rem = a%4; 
        bool ans ;
        if(rem!=0){
            ans = true ; 
        }
        else{
            return false ; 
        }
        return ans ; 
    }
};
