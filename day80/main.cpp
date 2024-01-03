class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int r = 0 ; 
        int p = 0 ; 
        for(int i =0 ; i<bank.size() ; i++){

            int currPtr = 0 ; 
            for(auto &ch : bank[i]){
                if(ch=='1'){
                    currPtr ++ ; 
                }
            }

            r += p*currPtr ; 

            if(currPtr!=0){
                p = currPtr ; 
            }
        }

        return r ; 
    }
};
