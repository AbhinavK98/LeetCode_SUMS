class Solution {
    // here basically we are swapping rows with column to make the transpose of matrix so we have created a ans matrix wit size col*row and then stored swap value of matrix in it
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       
        int row=matrix.size();
        int col=matrix[0].size();
         vector<vector<int>> ans(col, vector<int> (row));//
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                ans[i][j]=matrix[j][i];// swapping values of row in column
            }
        }
        
        return ans;
    }
};