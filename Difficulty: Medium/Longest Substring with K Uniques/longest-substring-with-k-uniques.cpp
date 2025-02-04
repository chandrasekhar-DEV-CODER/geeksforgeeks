//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        long long r=0,l=0,m=-1;
        unordered_map<char,long long>s1;
        while(r<s.size())
        {
            s1[s[r]]++;
            if(s1.size()>k){
                if(s1.size()>k){
                    s1[s[l]]--;
                }
                if(s1[s[l]]==0)
                {
                    s1.erase(s[l]);
                }
                l++;
            }
            if(s1.size()==k)
            {
                m=max(m,r-l+1);
            }
            r++;
        }
        return m;
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
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends