class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        
        int m= matrix.size();
        
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<matrix[i].size();j++){
                
                if(matrix[i][j]==t)
                    return true;
            }
            
        }
        return false;
    }
};