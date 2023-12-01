class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        //string for vector 1 
        string str1 = "";
        for(int i =0;i<word1.size();i++){
            str1 += word1[i] ; 
        }

        //string for vector 2
        string str2 = "";
        for(int i =0;i<word2.size();i++){
            str2 += word2[i] ; 
        }

        bool ans = true ; 

        int s1 = str1.size() ; 
        int s2 = str2.size() ; 
        int n = 0 ; 
        if(s1>s2){
            n = s1 ; 
        }
        else{
            n = s2 ; 
        }

        for(int i =0;i<n;i++){
            if(str1[i]!=str2[i]){
                ans = false ;
                break ;  
            }
        }

        return ans ;
    }
};
