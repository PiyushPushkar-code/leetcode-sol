#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int l=0;
        int r=0;
        int len=0;
        while(r<s.length()){
            if(mp[s[r]]!=-1)
                l=max(l,mp[s[r]]+1);
            
            mp[s[r]]=r;
            
            len=max(len,r-l+1);
            r++;
        }
        return len;
        
    }
};