class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
         if(n==0)
        return 0;
    long long res=INT_MIN;
    long long maxsum=INT_MIN;
    for(int i=0; i<n ; i++){
        long long p=nums[i];
        maxsum=max(maxsum+nums[i] , p);
        res=max(res,maxsum);
        
        
    }
    return res;
    }
};