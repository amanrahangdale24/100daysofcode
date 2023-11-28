class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int nonZeroIndex = 0;

        // Move all non-zero elements to the front
        for (int num : nums) {
            if (num != 0) {
                nums[nonZeroIndex++] = num;
            }
        }

        // Fill the remaining elements with zeroes
        while (nonZeroIndex < nums.size()) {
            nums[nonZeroIndex++] = 0;
        }
    }
};
