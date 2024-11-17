//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longest(vector<string> &names) {
        // code here
        int maxLength = 0;
    int index = 0;    
    for (int i = 0; i < names.size(); i++) {
        int currentLength = names[i].length();
        if (currentLength > maxLength) {
            maxLength = currentLength;
            index = i;
        }
    }
    return names[index];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> names;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        string str;
        while (ss1 >> str) {
            names.push_back(str);
        }
        Solution obj;
        string res = obj.longest(names);
        cout << res << "\n~\n";
    }
}

// } Driver Code Ends