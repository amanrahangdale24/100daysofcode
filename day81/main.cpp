class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans; 
        int sum = 0 ; 
        for(auto ele : nums){
            sum+=ele ; 
        }
        int leftSum = 0 ;
        for(int i =0;i<nums.size() ; i++){
            sum = sum - nums[i] ; 
            ans.push_back(abs(leftSum-sum)) ; 
            leftSum += nums[i] ; 
            
            
        }

        return ans ; 

    }
};
