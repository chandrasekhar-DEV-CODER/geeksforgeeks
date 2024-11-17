//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findExtra(vector<int>& arr1, vector<int>& arr2) {
        // add code here.
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return i;
                break;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr1, arr2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr2.push_back(number1);
        }

        Solution ob;
        int ans = ob.findExtra(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends