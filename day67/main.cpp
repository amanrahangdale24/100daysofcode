class Solution {
public:
    bool isPowerOfFour(int n) {
        bool ans = true ;
        if(n==0){
            return false ; 
        } 
        while(n!=1){
            int a = n%4 ; 
            if(a!=0){
                ans = false ; 
                break; 
            }
            else{
                n = n/4 ;
            } 
        }

        return ans ; 
    }
};
