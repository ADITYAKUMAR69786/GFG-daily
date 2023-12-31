//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
       int a,d,l,s,i,sum=0,missingnumber; 
    a=arr[0]; 
    l=arr[n-1]; 
  
  
    /* Taking the sum of all the elements of the array 
       including the missing element using formulae  
       S(n) = n/2 (a+l)  where a is the first element  
       and l is the last element */
      
    if((a+l)%2==0) /* ensuring this as n/2(a+l) and (a+l)/2 
                      would give different values programmatically */
    { 
        s = (a+l)/2; 
        s = s*(n+1); 
    } 
    else
    { 
        s = (n+1)/2; 
        s = (a+l)*s; 
  
    } 
    
    // Taking the sum of all the elements of the 
    // array excluding the missing element 
    
    for(i=0;i<=n-1;i++) 
    { 
        sum = sum + arr[i]; 
    } 
  
    missingnumber=s-sum; 
  
    return missingnumber; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends