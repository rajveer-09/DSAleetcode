class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
         vector<int> result;

        for (int num : nums) {
            int index = abs(num) - 1;

            if (nums[index] < 0) {
                // If the number at index is negative, it means we have seen it before
                result.push_back(index + 1);
            } else {
                // Mark the number at index as seen by negating it
                nums[index] = -nums[index];
            }
        }

        return result;
        
    }
};