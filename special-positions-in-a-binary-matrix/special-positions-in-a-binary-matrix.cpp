class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
         long long n = mat.size(),m=mat[0].size();
        int row[n];
        int col[m];
        memset(row, 0,sizeof(row));
         memset(col, 0,sizeof(col));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i]+=mat[i][j];
                col[j]+=mat[i][j];
            }
        }
       // for(auto c:row)cout<<c<<" ";
       // cout<<"\n";
       // for(auto c:col)cout<<c<<" ";
       // cout<<"\n";
        int c=0;
        for(int i=0;i<n;i++ ){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && row[i]==1 && col[j]==1)c++;
                
               // cout<<i<<" "<<j<<" "<<c<<"\n";
            }
        }
        return c; 
    }
};
