class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001] = {0}, freqOfFreq[1001] = {0};

        for (int& n : arr) freq[n + 1000]++;

        for (int i = 0; i < 2001; i++) {
            if (freq[i] != 0 && freqOfFreq[freq[i]]++ > 0)
                return false;
        }

        return true;
        
    }
};