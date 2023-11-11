class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int s=0,e=arr.size()-1,m;
        while(s<=e){
            m=e+(s-e)/2; //only this will work here with this algo
            
            if(arr[m]>arr[m-1]&&arr[m]>arr[m+1])
                return m;
            
            if(arr[m]>arr[m-1])
                s=m+1;
            else
                e=m-1;
        }
        return -1;
    }
};