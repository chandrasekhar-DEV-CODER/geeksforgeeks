//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    bool PalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            int n=arr[i];
            int o= n,r= 0,re=0;
            while (n != 0) {
            re= n % 10;
            r= r * 10 + re;
            n /= 10;
            }
            if(o!=r)
            {
                return false;
                break;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends