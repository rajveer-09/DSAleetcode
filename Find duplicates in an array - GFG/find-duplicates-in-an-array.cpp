//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
            arr[index] += n;
        }
    
        // Now check which value exists more
        // than once by dividing with the size
        // of array
        bool flag = false;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if ((arr[i] / n) > 1) {
                ans.push_back(i);
                flag = true;
            }
        }   
        if (!flag) ans.push_back(-1);
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends