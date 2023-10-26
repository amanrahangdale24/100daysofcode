class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele ; 
        for(int i = 0 ; i<nums.size() ; i++){
            int sum = 0;
            for( int j =0 ;j<nums.size() ; j++){
                if(nums[i] == nums[j]){
                    sum++; 
                    if(sum>count){
                        count = sum ;
                        ele = nums[i] ; 
                    }
                }
            }
        }

        return ele ;
    }
};
