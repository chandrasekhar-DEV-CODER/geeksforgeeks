//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool ar(vector<int> &arr, int j) {
    for (int i = 0; i < j; i++) {
        if (arr[i] >= arr[j]) {
            return false;
        }
    }
    for (int i = j + 1; i < arr.size(); i++) {
        if (arr[i] <= arr[j]) {
            return false;
        }
    }
    return true;
}

int findElement(vector<int> &arr) {
    for (int i = 1; i < arr.size() - 1; i++) { 
        if (ar(arr, i)) {
            return arr[i];
        }
    }
    return -1;}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.findElement(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends