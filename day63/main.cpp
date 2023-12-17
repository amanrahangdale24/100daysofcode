class Solution {
public:
    bool isPowerOfThree(int n) {
        bool ans = true ; 
        if(n<=0){
            ans = false ; 
        }
        while(n>1){
            int a = n%3 ; 
            if(a!=0){
                ans = false ; 
                break ; 
            }
            else{
                n = n/3 ; 
            }
        }

        return ans ; 
    }
};
