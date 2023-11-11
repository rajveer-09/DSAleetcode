class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // We are in the ascending part of the mountain
                left = mid + 1;
            } else {
                // We are in the descending part of the mountain or at the peak
                right = mid;
            }
        }

        // The loop breaks when left == right, which is the peak
        return left;
        
    }
};