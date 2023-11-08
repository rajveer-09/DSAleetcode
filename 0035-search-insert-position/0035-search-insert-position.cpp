class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid; // Target found at index mid
        } else if (nums[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return low; // Target not found, return the index where it should be inserted
        
    }
};