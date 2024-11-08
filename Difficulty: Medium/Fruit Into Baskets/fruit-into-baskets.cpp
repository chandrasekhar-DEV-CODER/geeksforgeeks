//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(vector<int> &arr) 
    {
     int N=arr.size();
    map<int, int> mp;
 
    int i = 0, j = 0, n = arr.size();
 
    int size = 0;
 
    while (j < n) {
 
        mp[arr[j]]++;
 
        while (mp.size() > 2) {
 
            mp[arr[i]]--;
 
            if (mp[arr[i]] == 0) {
 
                mp.erase(arr[i]);
            }
 
            i++;
        }
 
        size = max(size, j - i + 1);
 
        j++;
    }
 
    return size;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalFruits(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends