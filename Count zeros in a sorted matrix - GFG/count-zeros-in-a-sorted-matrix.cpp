//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
	int N = A.size();
    int count = 0;
    
    // Start from the top-right corner
    int i = 0, j = N - 1;

    while (i < N && j >= 0) {
        // If the current element is zero, move to the next row
        if (A[i][j] == 0) {
            count += j + 1;  // Count the zeros to the left of the current position
            i++;            // Move to the next row
        } else {
            j--;            // Move to the left in the same row
        }
    }

    return count;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends