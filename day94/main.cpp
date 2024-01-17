class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurences; 
        for(auto ele : arr){
            occurences[ele]++ ; 
        }
        int s1 = occurences.size() ; 
        set<int> st ;
        for(auto ele : occurences){
            st.insert(ele.second) ; 
        }

        int s2 = st.size() ; 

        if(s1==s2){
            return true ; 
        }
        return false ; 
    }
};
