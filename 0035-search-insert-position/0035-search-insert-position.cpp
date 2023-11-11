class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
         
        int s=0,e=nums.size()-1,ans=0;
        
        while(s<=e){
            int m=s+(e-s)/2;
            
            if(nums[m]==t)
                return m;
            else if(nums[m]<t)
                s=m+1;
            else{
                ans=m;
                e=m-1;
            }
        }
            return s;
        }
};