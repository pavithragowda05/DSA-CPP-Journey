class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rows=false,cols=false;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    if(i==0) rows=true;
                    if(j==0) cols=true;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(cols){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
        if(rows){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        
    }
};
