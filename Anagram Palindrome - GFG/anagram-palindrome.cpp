//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    
    int frequency[26] = {0}; 
    for (int i = 0; i < S.length(); i++) {
        frequency[S[i] - 'a']++; 
    }

    int oddcount = 0;
    for (int i = 0; i < 26; i++) {
        if (frequency[i] % 2 != 0) {
            oddcount++;
            if (oddcount > 1)
                return 0;
        }
    }
    return 1;
    
}