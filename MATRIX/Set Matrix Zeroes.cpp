//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

//You must do it in place.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col1=1,r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++){
            if(matrix[i][0]==0) col1=0;
            for(int j=1;j<c;j++)
                { if(matrix[i][j]==0)
                matrix[i][0]=matrix[0][j]=0;}
        }
        
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>0;j--)
             {   if(matrix[i][0] ==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
             }
            if(col1==0) matrix[i][0]=0;
        }
    }
};