class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int n=numbers.size();
        int end=n-1;
        while(start<=end){
            if(numbers[start]+numbers[end]>target){
                end--;
            }
            else if(numbers[start]+numbers[end]<target)
            start++;
            else if(numbers[start]+numbers[end]==target)
            break;
        }
        vector<int>v;
        v.push_back(start+1);
        v.push_back(end+1);
        return v;
        
    }
};