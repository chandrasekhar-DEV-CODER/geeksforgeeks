//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int t=n;
		    int sum=0;
		    while(t!=0)
		    {
		        int rem=t%10;
		        sum=sum*10+rem;
		        t=t/10;
		    }
		    if(sum==n){return "Yes";}
		    return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends