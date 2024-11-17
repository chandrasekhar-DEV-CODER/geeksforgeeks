//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array to the left by k positions
void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0 || k == 0 || k % n == 0) return; // No rotation needed

    k = k % n; // Normalize k if it's greater than n
    // Step 1: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 2: Reverse the remaining n - k elements
    reverse(arr, k, n - 1);
    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends