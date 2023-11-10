class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
    sort(nums.begin(), nums.end());

    int x = 0;

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            i++;
            x++;
        }
    }

    vector<int> arr(x);

    int p = 0;

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            arr[p] = nums[i];
            i++;
            p++;
        }
    }

    return arr;
        
    }
};