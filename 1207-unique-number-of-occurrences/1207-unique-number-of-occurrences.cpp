class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {


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
        // int cnt = 1;
        // vector<int> ans;
        // int j = 1;
        // sort(arr.begin(), arr.end());
        // for(int i = 0; i < arr.size()-1; i++){
        //     if(arr[i] == arr[j]){
        //         j++;
        //         cnt++;
        //         continue;
        //     }
        //     // ans.push_back(cnt);
        //     else if(arr[i] != arr[j]){
        //         ans.push_back(cnt);
        //         j += 1;
        //         cnt = 1;
        //         continue;
        //     }
        //     ans.push_back(cnt);
        //     cnt = 1;
        // }
        // ans.push_back(cnt);
        // sort(ans.begin(), ans.end());
        // for(int i = 0; i < ans.size()-1; i++){
        //     if(ans[i] == ans[i+1]){
        //         return false;
        //     }
        // }
        // return true;
        
        //}
};
