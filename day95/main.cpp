class Solution {
public:
    bool isVowel(char ch){
        bool ans = false ; 
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            ans = true ; 
        }
        else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            ans= true ; 
        }

        return ans ; 
    }

    string reverseVowels(string s) {
        int i = 0 ; 
        int j = s.size()-1 ; 
        while(i<j){
            if(!isVowel(s[i])){
                i++ ; 
            }
            else if(!isVowel(s[j])){
                j-- ; 
            }
            else{
                swap(s[i] ,s[j]) ; 
                i++ ; j-- ; 
            }
        }
        return s ; 
    }
};
