//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // write code
        unordered_map<int, int>h;
    for (int i = 0; i < arr.size(); i++) {
        h[arr[i]]++;
        if (h[arr[i]] == k) {
            return arr[i];
        }
    }
    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.firstElementKTime(arr, k);
        cout << res << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends