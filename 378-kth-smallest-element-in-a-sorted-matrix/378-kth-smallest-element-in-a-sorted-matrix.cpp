class Solution {
public:
    //1.Bruteforce : first we purged all values from 2D matrix to 1D array then sorted 1D array then returned kth element in sorted array to get kth smallest
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int arr[m*n];
        int z=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[z]=matrix[i][j];
                z++;
            }
        }
        sort(arr,arr+(n*m));
        return arr[k-1];
        
    }
};