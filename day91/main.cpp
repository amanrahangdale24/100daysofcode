class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1 = word1.size() ; 
        int l2 = word2.size() ; 
        if(l1!=l2){
            return false ; 
        }
        vector<int> freq1(26) ; 
        vector<int> freq2(26) ; 
        for(int i = 0 ;i<l1 ; i++){
            char ch1 = word1[i] ; 
            char ch2 = word2[i] ;       
            int idx1 = ch1 - 'a' ; 
            int idx2 = ch2 - 'a' ; 
            freq1[idx1]++ ; 
            freq2[idx2]++ ; 
        }
        for(int i = 0 ; i< 26 ; i++){
            if(freq1[i] == 0 && freq2[i]==0){
                continue ; 
            }
            else if(freq1[i] != 0 && freq2[i] != 0){
                continue ; 
            }
            else {
                return false; 
            }
        }
        
        sort(freq1.begin() , freq1.end()) ; 
        sort(freq2.begin() , freq2.end()) ; 

        return freq1 == freq2 ;    
    }
};
