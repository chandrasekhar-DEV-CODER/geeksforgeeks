//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        long long r=0,l=0,m=0;
        unordered_map<long long,long long>s;
        while(r<arr.size()){
            s[arr[r]]++;
            
            if(s.size()>2){
                while(s.size()>2){
                s[arr[l]]--;
                if(s[arr[l]]==0){
                    s.erase(arr[l]);
                }
                l++;}
            }
            if(s.size()<=2){
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
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends