class Solution {
public:

    string convertintostring(string s ){
        string a = "";
        for(int i =0;i<s.size() ; i++){
            char ch= s[i];
            if(isalnum(ch)){
                a+=ch;
            }
        }
        string lowercase = "";
        for(int i =0 ; i<a.size() ; i++){
            lowercase += tolower(a[i]) ;
        }
        return lowercase;
    }

    bool isPalindrome(string s) {
        string a =  convertintostring(s); 
        int i =0;
        int j =a.size()-1;
        while(i<=j){
            if(a[i]!=a[j]){
                return false ; 
            }
            i++;
            j--;
        }
        return true;
    }
};
