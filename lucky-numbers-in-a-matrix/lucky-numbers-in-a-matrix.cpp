class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
      int n=mat.size(),m=mat[0].size();
        int row[n],col[m];
        
        for(int i=0;i<n;i++)row[i]=INT_MAX;
        for(int i=0;i<m;i++)col[i]=INT_MIN;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]>mat[i][j])row[i]=mat[i][j];
                if(col[j]<mat[i][j])col[j]=mat[i][j];
            }
        }
      // for(int i=0;i<n;i++)cout<<row[i]<<" ";
       // for(int i=0;i<m;i++)cout<<col[i]<<" ";
        vector<int>v;
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              if(mat[i][j]==col[j] && mat[i][j]==row[i])v.push_back(mat[i][j]); 
            } 
       }
        return v;
    }
};
