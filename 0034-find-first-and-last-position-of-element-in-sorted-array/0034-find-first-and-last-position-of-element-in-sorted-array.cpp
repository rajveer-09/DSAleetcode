class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n =  nums.size() - 1;
        int low = 0;
        int high = n;
        int first = -1;
        int last = -1;
        while(high >= low){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                if(mid == 0 || nums[mid - 1] != target){
                    first = last = mid;
                    break;
                }else{
                    high = mid - 1;
                }  
            }
            else if(nums[mid] > target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        high = n;

        while(high >= low){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                if(mid == n || nums[mid + 1] != target){
                    last = mid;
                    break;
                }else{
                    low = mid + 1;
                }
            }
            else if(nums[mid] > target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return {first, last};
        
    }
};