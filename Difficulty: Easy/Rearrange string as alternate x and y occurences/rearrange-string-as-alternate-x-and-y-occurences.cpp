//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str, int x, int y)

{
    int z = 0, o = 0;
    for (char ch : str) {
        if (ch == '0') z++;
        else o++;
    }

    string result;
    while (z > 0 && o > 0) {
        for (int i = 0; i < x && z > 0; i++, z--) {
            result += '0';
        }
        for (int i = 0; i < y && o > 0; i++, o--) {
            result += '1';
        }
    }

    while (z-- > 0) result += '0';
    while (o-- > 0) result += '1';

    return result;
}

};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s, x, y) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends