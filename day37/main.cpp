class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> fans;
        int a1 = nums1.size();
        int a2 = nums2.size();
        
        for(int i=0;i<a1 ;i++){
            for(int j = 0; j<a2 ; j++){
                if(nums1[i]==nums2[j]){
                    fans.insert(nums1[i]);
                }
            }
        }


        for(int i : fans){
            ans.push_back(i);
        }

        return ans ;

        
        
        
    }
};
