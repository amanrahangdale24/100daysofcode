class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum =0;
        for(int a = 0 ; a<=n ;a++){
            total_sum += a ; 
        }
        for(int x: nums){
            total_sum = total_sum - x;
        }
        return total_sum;
    }
};
