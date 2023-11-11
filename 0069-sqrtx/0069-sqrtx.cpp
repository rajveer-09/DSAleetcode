class Solution {
public:
    int mySqrt(int x) {
      //int s=0,e=x,ans=0;
        
        
        int n=x;
       long int i=0;
        //as ii should be an int if i is an int but integeroverflow can occur on i*i
        
        for(;i*i<n;i++){
           
        }
            
         if(i*i>n)
                return i-1;
       return i;
    }
        
};