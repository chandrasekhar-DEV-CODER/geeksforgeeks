//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int m(string& s, int k) {
        // code here.
      if (s.size() == 0) {
        return 0;
    }
    unordered_map<char, int> map;
    int num = 0, left = 0;

    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
        while (map.size() > k) {
            map[s[left]]--;
            if (map[s[left]] == 0) {
                map.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num; 
    }
    int countSubstr(string& s, int k)
{
    return m(s, k) - m(s, k - 1);
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends