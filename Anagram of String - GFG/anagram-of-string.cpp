//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes 
 // make hash array for both string and calculate
    // frequency of each character
    int count1[CHARS] = {0}, count2[CHARS] = {0};

    // count frequency of each charcter in first string
    for (int i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;

    // count frequency of each charcter in second string
    for (int i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;

    // traverse count arrays to find number of charcters
    // to be removed
    int result = 0;
    for (int i=0; i<26; i++)
        result += abs(count1[i] - count2[i]);
        return result;
}