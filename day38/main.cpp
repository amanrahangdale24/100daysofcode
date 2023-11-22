class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a = n ;
        if(a==1){
            return true;
        }
        else if(a%2!=0 || a==0){
            return false ; 
        }
        else{
            while(a!=1 ){
                if(a%2==0){
                    a = a/2 ; 
                }
                else{
                    return false ; 
                }
            }
        }
        bool fans ;
        if(a==1){
            fans = true; 
        }

        return fans ; 


    }
};
