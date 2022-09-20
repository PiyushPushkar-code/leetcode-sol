class Solution {
public:
    string longestPalindrome(string s) {
       if(s.size()==0)
           return "";
        int n=s.size();
        int i=0;
        int j=0;
        bool dp[n][n];
        memset(dp,false,n*n*sizeof(bool));
        for(int p=0; p<n ; p++){
            dp[p][p]=true;
            if(p==n-1)
                break;
            dp[p][p+1] = (s[p]==s[p+1]);
        }
        for(int i=n-3 ; i>=0 ; i--){
            for(int j=i+2 ; j<n ; j++){
                dp[i][j]= (dp[i+1][j-1] && s[i]==s[j]);
            }
        }
        
        int max=0;
        string subs="";
        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++){
                if(dp[i][j]==true && j-i+1>max)
                {
                    max=j-i+1;
                    subs=s.substr(i,j-i+1);
                }
            }
        }
        return subs;
        
    }
};