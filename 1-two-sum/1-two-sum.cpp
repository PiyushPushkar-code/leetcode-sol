class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>set;
        for(int i=0 ; i<nums.size() ; i++){
            if(set.find(target-nums[i])!=set.end()){
                v.push_back(set[target-nums[i]]);
                v.push_back(i);
            }
            set[nums[i]]=i;
        }
        return v;
    }
};