#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>arr(n);
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr.begin(),arr.end(),greater<int>());
	  vector<int>vec(arr.begin(),arr.begin()+k);
	  for(int i=0;i<vec.size();i++){
	  	cout<<vec[i]<<" ";
	  }
	  cout<<endl;
	}
	

	return 0;
}