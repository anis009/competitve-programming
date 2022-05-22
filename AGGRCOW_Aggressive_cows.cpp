#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll check(ll *a,int n,ll c,ll distance){
	int lastposition = 0;
	int count = 1;
	for(int i = 1;i<n;i++ ){
		if(a[i]-a[lastposition]>=distance){
			count++;
			lastposition = i;
			if(count==c){
				return true;
			}
		}
	}
	return false;
}

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	
	cin>>t;
	
	while(t--){
		
		ll n,c;
		
		cin>>n>>c;
		
		ll a[n];
		
		for(int i=0;i<n;i++)cin>>a[i];
		
		sort(a,a+n);
		
		ll start = 0;

	  ll end = a[n-1] - a[0]; 
	  
	  ll ans = -1; 

	  while(start<=end){
	
	  	ll mid = start + (end-start)/2;

	  	if(check(a,n,c,mid)){
	
	  		ans = mid;
	
	  		start = mid + 1;
	  	}
	  	else{
	  		end = mid - 1;
	  	}
	  }

	  cout<<ans<<endl;
	}

	return 0;
}