#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
   	int n;
  	cin>>n;
  	int a[n];
  	long long int prefixsum[n+1];
  	prefixsum[0]=0; 
  	for(int i=0;i<n;i++){
  		cin>>a[i];
  		prefixsum[i+1] = prefixsum[i]+a[i];
  	}
  	//for(int i=1;i<=n;i++)cout<<prefixsum[i]<<" "<<endl;
  	int q;
  	cin>>q;
  	while(q--){
  		int l,r;
  		cin>>l>>r;
  		long long int sum = prefixsum[r] - prefixsum[l-1];
  		cout<<sum<<endl;
  	}
  

	

	return 0;
}