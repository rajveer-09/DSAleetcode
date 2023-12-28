//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}

// } Driver Code Ends


string solve(string a) {
    // code here
     int count = 0, alphabets[26] {0};
    for(char c: a)
        if(c != 'a' && c != 'e' & c != 'i' and c != 'o' and c != 'u' and alphabets[c-97] == 0) {
            count++;
            alphabets[c-97]++;
        }
    return count%2 == 0 ? "SHE!" : "HE!";
}