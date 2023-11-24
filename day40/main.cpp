class Solution {
public:

    bool isPrime(int n ){
        while(n>0){
            if(n%2==0){
                n = n/2 ;
            }
            else if(n%3==0){
                n =n/3 ; 
            }
            else if(n%5==0){
                n = n/5 ; 
            }
            else{
                break ; 
            }
        }
        return (n==1) ; 
    }
    bool isUgly(int n) {
        bool yans = false ;
        if(isPrime(n)){
            yans = true;
        }
        return yans ;
    }
};
