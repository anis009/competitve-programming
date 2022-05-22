#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
	
	int n,m;

	queue<ll> qu;
	
	cin>>n>>m;

	ll a[n];

	for(int i=0;i<n;i++)cin>>a[i];

	sort(a,a+n);

  int end_p = n-1;
  
  int totoal_index = 0; 

	while(m--){
		
		int q;
		
		cin>>q;

		int ans;

		for(;totoal_index<q;totoal_index++){

			if(end_p >= 0 && (qu.empty() || a[end_p]>= qu.front())){
				ans = a[end_p];
				end_p--;
			}
			else{
				ans = qu.front();
				qu.pop();
			}

			qu.push(ans/2);
		
		}

		cout<<ans<<endl;

	}


	

	return 0;
}