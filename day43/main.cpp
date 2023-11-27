class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> temp ;
        int i =0;
        while(i<nums.size()){
            int start = i ;
            while(i+1<nums.size() && nums[i+1] == nums[i]+1){
                i++ ; 
            }
            if(i!=start){
                temp.push_back(to_string(nums[start] )+ "->" + to_string(nums[i])) ; 
            }
            else{
                temp.push_back(to_string(nums[i])) ; 
            }
            i++;
        }
        return temp ; 
    }
};
