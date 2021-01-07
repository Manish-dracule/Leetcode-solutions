class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){
          return a[0]*a[0]+a[1]*a[1]<b[0]*b[0]+b[1]*b[1];
      }) ; 
        vector<vector<int>>v;
        for(int i=0;i<K;i++){
            v.push_back(points[i]);
        }
        return v;
    }  
};
