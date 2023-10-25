class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int t=n,s=0,p=1;
        while(t){
            int d=t%10;
            s+=d;
            p*=d;
            t/=10;
        }
        return p-s;
        
    }
};