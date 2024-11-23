//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
    
    // Step 2: Initialize the result to the current difference between the largest and smallest
    int n = arr.size();
    int diff = arr[n-1] - arr[0];
    
    // Step 3: Loop through and compute the new possible differences
    for (int i = 1; i < n; i++) {
        int minHeight = std::min(arr[0] + k, arr[i] - k);  // Min height after modification
        int maxHeight = std::max(arr[n-1] - k, arr[i-1] + k);  // Max height after modification
        
        // Update the minimum difference
        diff = std::min(diff, maxHeight - minHeight);
    }
    
    return diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();

    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.getMinDiff(k, arr);
        cout << res;

        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends