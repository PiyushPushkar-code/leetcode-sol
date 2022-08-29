class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans;
        int l=0; 
        int r=nums.size()-1;
      
        int mid;
        while(l<r){
              if(nums[l]<nums[r])
            return nums[l];
            mid=(l+r)/2;
            if(nums[r]>nums[mid])
                r=mid;
            else if(nums[mid]>nums[r])
                l=mid+1;     
            }
    return nums[l];
    }
    
};