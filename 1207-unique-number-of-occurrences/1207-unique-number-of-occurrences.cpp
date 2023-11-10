class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n = arr.size();
  sort(arr.begin(), arr.end());

  // Create an auxiliary array to store the number of occurrences of each element.
  vector<int> ans(n,0);
  int p=0;

  // Iterate over the input array and count the number of occurrences of each element.
  for (int i = 0; i < n; i++) {
    int c = 1;
    int x=i;

    // Compare the current element to the next element in the array.
    // If the two elements are equal, increment the count for the current element and skip the next element.
    for (int j =x+1; j < n; j++) {
      if (arr[x] == arr[j]) {
        c++;
        i=j;
      }
    }

  // Store the current count in the auxiliary array `ans`.
    ans[p] = c;
    p++;
  }

  // Iterate over the auxiliary array `ans` to check for duplicate counts.
  bool uC = true;
  for (int i = 0; i < p; i++) {
    for (int j = i+1; j < p+1; j++) {
      if (ans[i] == ans[j]) {
        uC = false;
        break; // Break out of the inner loop once a duplicate count is found
      }
    }
    if (!uC) {
      break; // Break out of the outer loop once a duplicate count is found
    }
  }

  // Return `true` if there are no duplicate counts, otherwise return `false`.
  return uC;
        
    }
};