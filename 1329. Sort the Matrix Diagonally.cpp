class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m= mat.size();//rows
        int n=mat[0].size();//columns
        
        /*inserting all the elements into unordered map depending on 
        elements i-j value, as this will help in sorting diagonally*/
        
        unordered_map<int , vector<int>> diagonalElements;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int diagonalNumber=i-j;
                diagonalElements[diagonalNumber].push_back(mat[i][j]);
            }
        }
        
        //sorting all diagonals from -(n-1) to (m-1)
        for(int k=-(n-1); k<m; k++){
            sort(diagonalElements[k].begin(),diagonalElements[k].end());
        }
        
        //putting elements back into mat
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int diagonalNumber=i-j;
                mat[i][j]=diagonalElements[diagonalNumber].back();
                diagonalElements[diagonalNumber].pop_back(); //removing from map
            }
        }
        
        return mat;
    }
};
