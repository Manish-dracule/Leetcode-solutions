class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=((n+1)*n)/2;
        int sum=0;
        for(int i=0;i<n;i++)sum+=nums[i];
       // cout<<total<<" "<<sum;
        return total -sum;
    }
};
