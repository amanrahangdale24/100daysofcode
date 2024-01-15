class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st ;
        for( int i = 0 ;i<operations.size() ; i++){
            string ch = operations[i] ; 
            if(ch!="C" && ch!="D" && ch!="+" ){
                int chr = stoi(ch) ; 
                st.push(chr) ; 
            }
            else{
                if(ch == "C"){
                    st.pop() ; 
                }
                else if(ch == "D"){
                    int a = st.top() ;  
                    a = a*2 ; 
                    st.push(a) ; 
                }
                else if(ch == "+"){
                    int top1 = st.top() ; 
                    st.pop() ; 
                    int top2 = st.top() ; 
                    st.push(top1) ; 
                    st.push(top1+top2) ; 
                }
            }
        }

        int sum = 0 ; 
        while(!st.empty()){
            sum+= st.top() ; 
            st.pop() ; 
        }

        return sum ;
    }
};
