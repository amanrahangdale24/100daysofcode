class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1){
            return nums[0] ; 
        }
        sort(nums.begin() , nums.end()) ; 
        int a1 = nums[n-1]; 
        int a2 = nums[n-2]; 
        return (a1-1) * (a2-1) ; 
    }
};
