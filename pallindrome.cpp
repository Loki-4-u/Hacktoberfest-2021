class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n+1, vector<bool>(n+1, 0));
        for(int i=0;i<n;i++)
            dp[i][i]=1; 
        int ans =n;
        for(int i=n-1;i>=0; i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    if(dp[i+1][j-1] || (j-i==1))
                        {dp[i][j] =1; ans++;}
                }
            }
        }
        return ans;
    }
};
