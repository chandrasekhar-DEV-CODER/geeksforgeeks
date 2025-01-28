//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> singleNumber(vector<int>& arr) {
        // Code here.
        unordered_map<int,int>c;
        vector<int>a;
        int cc=0;
        for(int i=0;i<arr.size();i++)
        {
            c[arr[i]]++;
        }
        for(auto& i:c)
        {
            if(i.second==1){
                a.push_back(i.first);
            }
        }sort(a.begin(),a.end());
        return a;
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

        Solution ob;
        vector<int> ans = ob.singleNumber(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends