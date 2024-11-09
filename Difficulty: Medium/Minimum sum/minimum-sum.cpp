//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string addString(string &s1, string &s2) {
      int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;
    string res = "";
    while (i >= 0 && j >= 0) {
        int sum = (s1[i] - '0') + 
                  (s2[j] - '0') + carry;
        res.push_back(sum%10 + '0');
        carry = sum / 10;
        i--;
        j--;
    }
    if (i == 0) {
        int sum = (s1[i] - '0') + carry;
        res.push_back(sum%10 + '0');
        carry = sum / 10;
    }
    if (carry > 0) {
        res.push_back(carry + '0');
    }
    while (!res.empty() && res.back() == '0')
        res.pop_back();
    reverse(res.begin(), res.end());
  
      return res;
}
string minSum(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    string s1 = "", s2 = "";
    for (int i = 0; i < arr.size(); i += 2) {
        s1.push_back(arr[i] + '0');
    }
    for (int i = 1; i < arr.size(); i += 2) {
        s2.push_back(arr[i] + '0');
    }
    return addString(s1, s2);
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends