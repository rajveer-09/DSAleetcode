class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
                // Sort the array to group equal elements together
        sort(arr.begin(), arr.end());

        int count = 1;
        int n = arr.size();

        unordered_set<int> occurrencesSet;

        // Check for uniqueness of occurrences
        for (int i = 1; i < n; ++i) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                if (!occurrencesSet.insert(count).second) {
                    // If count is not unique, return false
                    return false;
                }
                count = 1; // Reset count for the next unique element
            }
        }

        // Check the last count
        return occurrencesSet.insert(count).second;

        
    }
};