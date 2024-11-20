//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int t, vector<int> &arr1, vector<int> &arr2) {
        // Code here
vector<pair<int, int>> result;

    // Use a multiset for arr1 to handle duplicates
    multiset<int> elements(arr1.begin(), arr1.end());

    // Traverse arr2 and find pairs
    for (int num : arr2) {
        int complement = t - num;
        auto range = elements.equal_range(complement); // Get all occurrences of complement
        for (auto it = range.first; it != range.second; ++it) {
            result.push_back({*it, num});
        }
    }

    // Sort the result in increasing order
    sort(result.begin(), result.end());

    return result;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr1;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2); // Read the entire line for the array elements
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }

        Solution ob;
        vector<pair<int, int>> vp = ob.allPairs(x, arr1, arr2);
        int sz = vp.size();
        if (sz == 0)
            cout << -1 << endl;
        else {
            for (int i = 0; i < sz; i++) {
                if (i == 0)
                    cout << vp[i].first << " " << vp[i].second;
                else
                    cout << ", " << vp[i].first << " " << vp[i].second;
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends