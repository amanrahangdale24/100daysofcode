class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ; 
        int a1 = nums[nums.size()-1] ; 
        int a2 = nums[nums.size()-2] ; 

        int b1 = nums[0] ; 
        int b2 = nums[1] ; 

        return (a1*a2) - (b1*b2) ; 
    }
};
