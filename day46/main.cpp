class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int f = 0 ; 
        int l = nums.size() -1; 
        while(f<l){
            int mid = (l+f) / 2 ; 
            if(nums[mid]>nums[mid+1]){
                l = mid ; 
            }
            else{
                f = mid+1 ; 
            }
        }
        return l ;
    } 
        
};
