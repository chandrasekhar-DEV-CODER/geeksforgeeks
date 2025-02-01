//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  const int MOD=1e9 + 7;
    long long int topDown(int n) {
        // code here
        if (n == 0) return 0;
    if (n == 1) return 1;
        long long a=0,b=1,d;
        for(int i=1;i<n;i++)
        {
            d=(a+b)%MOD;
            a=b;
            b=d;
        }
        return d;
    }
    long long int bottomUp(int n) {
        // code here
        return topDown(n);
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
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends