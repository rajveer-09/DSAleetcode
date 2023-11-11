class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        int maxi = INT8_MIN;  // To keep track of the maximum value found so far
        int ans = -1;  // To store the index of the peak element

        while (low <= high) {
            int mid = (low + high) >> 1;  // Calculate the mid index using bit manipulation (same as dividing by 2)

            if (arr[mid] > maxi) {
                maxi = arr[mid];  // Update maxi with the current maximum value
                ans = mid;  // Update ans with the index of the current maximum value (potential peak)
            }

            // Check if the peak is on the right side of mid
            if (mid < n - 1 && arr[mid + 1] > arr[mid])
                low = mid + 1;
            // Check if the peak is on the left side of mid
            else if (mid > 0 && arr[mid] < arr[mid - 1])
                high = mid - 1;
            // We have found the peak, break out of the loop
            else
                break;
        }

        return ans;  // Return the index of the peak element
    }
        
};