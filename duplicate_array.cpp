#include<bits/stdc++.h>
using namespace std;


int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++)cin>>arr[i];
		int slow = arr[0];
	    int fast = arr[arr[0]];
	    while(slow!=fast){
	    	slow = arr[slow];
	    	fast = arr[arr[fast]];
	    
	    }
	    fast = 0;
	    while(slow != fast){
	    	slow = arr[slow];
	    	fast = arr[fast];
	    }

	    cout<<slow<<endl;
	}	

	return 0;
}