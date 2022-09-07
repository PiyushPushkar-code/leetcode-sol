class Solution {
public:
    
    void subs(int ind,vector<int>& candidates,int target,vector<int>&res,vector<vector<int>>&ans){
    
    if(ind==candidates.size()){
      if(target==0)
          ans.push_back(res);
      return;
    }
    if(target>=candidates[ind]){
        
        res.push_back(candidates[ind]);
        subs(ind,candidates,target-candidates[ind],res,ans);
        res.pop_back();
    }
    
     subs(ind+1,candidates,target,res,ans); 
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>res;
        subs(0,candidates,target,res,ans);
        return ans;
    }
};