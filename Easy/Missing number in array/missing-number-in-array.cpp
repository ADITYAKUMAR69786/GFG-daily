//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int s=array.size();
         int sum=0;
   for(int i=0;i<s;i++){
        sum=array[i]+sum;
   }
   int fact=(n*(n+1))/2;     // THIS GIVES YOU THE FACTORIAL TILL N 
   
   int numb=fact-sum;
   return numb;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends