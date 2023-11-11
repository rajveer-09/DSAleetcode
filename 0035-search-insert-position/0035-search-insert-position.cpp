class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
         
        int s=0,e=nums.size()-1,ans=nums.size();
        
        while(s<=e){
            int m=s+(e-s)/2;
            
            if(nums[m]==t){
                ans=m;
                break;
            }
            
            else if(nums[m]<t)
                s=m+1;
            //if the value is smaller then we cant put our number there only possibility is remaining array after that as we have replace the fist greater or same value
            
            else{
                ans=m;
                e=m-1;
            }
        }
            return ans;
        }
};