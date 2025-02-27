//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void computeLPSArray(string &s, vector<int> &lps) {
    int len = 0, idx = 1;

    // lps[0] is always 0
    lps[0] = 0;

    // the loop calculates lps[i] for
    // i = 1 to str.length() - 1
    while (idx < s.length()) {
        if (s[idx] == s[len]) {
            len++;
            lps[idx] = len;
            idx++;
        }
        else {

            // If len is 0, then we have no common prefix
            // which is also a suffix
            if (len == 0) {
                lps[idx] = 0;
                idx++;
            }
            else {

                // Note that we do not move to the next
                // index
                len = lps[len - 1];
            }
        }
    }
}

// function to find the occurrence of pat in txt
bool KMPSearch(string &txt, string &pat, vector<int> &lps, int rep) {
    int n = txt.length(), m = pat.length();
    int i = 0, j = 0;
  
    // Iterate till s1 is repeated rep times
    while (i < n * rep) {

        // If characters match, move both pointers forward
        if (txt[i % n] == pat[j]) {
            i++;
            j++;

            // If the entire pattern is matched
            // store the start index in result
            if (j == m) {
                return true;
            }
        }

        // If there is a mismatch
        else {

            // Use lps value of previous index
            // to avoid redundant comparisons
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return false;
}
    int minRepeats(string& s1, string& s2) {
        int n = s1.length();
    int m = s2.length();

    // Declare and Compute the LPS Table
    vector<int> lps(m);
    computeLPSArray(s2, lps);

    // Find the minimum nnumber of times s1 needs to be
    // repeated to become as long as s2
    int x = (m + n - 1) / n;

    // Check when string s1 is repeated x times
    if (KMPSearch(s1, s2, lps, x))
        return x;

    // Check when string s1 is repeated (x + 1) times
    if (KMPSearch(s1, s2, lps, x + 1))
        return x + 1;

    // If string s2 was not found, return -1
    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends