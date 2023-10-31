class Solution {
public:
    string reverseWords(string s) {
    stringstream ss(s);
    string ans;
    string temp;

    while (ss >> temp) {
       ans = temp + " " + ans; 
    }
    
    ans.pop_back(); 
    return ans; 

    }

};
