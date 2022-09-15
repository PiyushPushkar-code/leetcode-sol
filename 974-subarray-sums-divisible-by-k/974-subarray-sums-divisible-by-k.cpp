class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0;
        int sum=0;
        int i=0;
         while(i<nums.size())
        {
            sum+= nums[i++];
            int rem = sum % k;
            if(rem<0) rem += k;
            
            if(mp.find(rem)!=mp.end())
                ans+=mp[rem];
            
            mp[rem]++;
            
        }
        return ans;
    }
};