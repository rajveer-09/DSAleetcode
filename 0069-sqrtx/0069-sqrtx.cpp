class Solution {
public:
    int mySqrt(int x) {
      int s=0,e=x,ans=0;
        
        
        
        while(s<=e){
            int m=s+(e-s)/2;
            if(m==0)  //as m=0 cannot be handled
                return x;
            
            if(m==x/m)//but here m=0 cannot be handled
                return m;
            
            else if(m<x/m){
                ans=m;
                s=m+1;
            }
            
            else{
                e=m-1;
            }
            
        }
        
        return ans;
        
    }
        
};