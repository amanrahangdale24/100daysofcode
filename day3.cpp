class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int lo = 0;
        int hi = v.size()-1; 

        while(lo<=hi){

            int mid = (lo+hi)/2 ;

            if(v[mid] == target){
                return mid;
            } 

            if(v[mid] < target){
                lo = mid+1;
            }
            else{
                hi = mid-1 ;
            }
        } return lo ;
    }
};
