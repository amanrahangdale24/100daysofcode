class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int final = 0 ;
        int a =0 ; 
        int ans = 1 ;  
        for(int i =0 ;i<arr.size() ; i++){
            int count = 0 ;
            for(int j =i+1;j<arr.size() ; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }

            if(count>a){
                a = count ; 
                ans = arr[i] ; 
            }
        }

        return ans ; 
    }
};
