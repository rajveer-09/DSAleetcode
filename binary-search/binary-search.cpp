class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s=0;
        int l=nums.size()-1;
        
        while(s<=l){
            int mid = s+(l-s)/2;
            
            if(nums [mid] == target ) return mid;
            
            else if(nums[mid] < target) s= mid +1;
            
            else l = mid-1;
        }
        
        return -1;
    }
};