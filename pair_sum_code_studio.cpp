#include<bits/stdc++.h>

using namespace std;
int mod = 1000000009; 
int main()
{

	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	
	int t;
	
	cin>>t;
	
	while(t--){
		
		int n;
		
		cin>>n;

	   vector<int> ans;
		
		vector<int> v(n);
		
		vector<long long> csum(n+1);
		
		
		for(int i=0;i<n;i++){
			
			cin>>v[i];
			
			csum[i+1] = (csum[i]%mod + v[i]%mod)%mod;
		}
		
		int q;
		
		cin>>q;
		
		for(int i=0;i<q;i++){
			
			long long l,r,d1,d2,sum1=0,sum2=0;
			
			cin>>l>>r;

			--l;

			d1 = (r/n)%mod;

			d2 = r%n;

			sum1 = (d1*csum[n])%mod;
			
			sum1 = (sum1 + csum[d2])%mod;

			d1 = (l/n)%mod;

			d2 = l%n;

			sum2 = (d1*csum[n])%mod;

			sum2 = (sum2 + csum[d2])%mod;

			ans.push_back(abs(sum1 -sum2+mod)%mod);
         
		}

		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}
	
	
	return 0;
}