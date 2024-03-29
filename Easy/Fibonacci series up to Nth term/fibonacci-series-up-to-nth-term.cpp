//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

long long MOD = 1e9+7;
class Solution {
  public:
  int  solve(int n,vector<int>&dp){
      if(n<=0){
         return 0;
      }
      if(n==1){
          return 1;
      }
      if(dp[n]!=-1){
          return dp[n]%MOD;
      }
      dp[n]=(solve(n-1,dp)+solve(n-2,dp))%MOD;
      return dp[n]%MOD;
  }
    vector<int> Series(int n) {
        // Code here
  
        vector<int>dp(n+1,-1);
        solve(n,dp);
        dp[0]=0;
        dp[1]=1;
        return dp;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends