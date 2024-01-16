class MyQueue {
public:
    MyQueue() {    
    }
    stack<int> st ;
    void push(int x) {
        stack<int> dummy ; 
        while(not st.empty()){
            dummy.push(st.top()) ; 
            st.pop(); 
        }
        st.push(x) ; 
        while(not dummy.empty()){
            st.push(dummy.top()) ; 
            dummy.pop() ; 
        }
    }
    
    int pop() {
        int res = st.top() ;
        st.pop() ; 
        return res ;  
    }
    
    int peek() {
        return st.top() ; 
    }
    
    bool empty() {
        return st.empty() ; 
    }
};
