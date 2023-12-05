class Solution {
public:
    int numberOfMatches(int n) {
        int sum = 0 ;
        while(n!=1){
            if(n%2==0){
                int match = n/2 ; 
                sum += match ; 
                int advance = n/2 ; 
                n = advance ; 
            }
            else{
                int match = (n-1)/2 ; 
                sum+=match ; 
                int advance = match+1 ; 
                n = advance ; 
            }
        }

        return sum  ;
    }
};
