vector<int>   plusOne(vector<int>& digits) {
        string total = "";
        for(int ele: digits){
            total+= to_string(ele);
        }
        int final = stoi(total);
        final = final+1;

        string ans = to_string(final);
        vector<int> out;
        for(int i = 0;i<ans.size() ; i++){
            char c = ans[i] ; 
            int s = c - '0' ; 
            out.push_back(s);
        } 

        return out ; 
}
