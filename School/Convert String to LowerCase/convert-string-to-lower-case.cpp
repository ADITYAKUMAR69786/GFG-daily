//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
        int len = S.size();
        for (int i = 0; i < len; i++) {
            //checking for each charater it is upper or not if upper then converting it to lower
            if (isupper(S[i])) S[i] = tolower(S[i]);
        }
        //returning converted string
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends