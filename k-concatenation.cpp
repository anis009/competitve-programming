#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long kadane(int a[],int n){
	ll current_sum=0;
	ll best_sum=0;
	for(int i=0;i<n;i++){
		current_sum+=a[i];
		if(current_sum>best_sum){
			best_sum = current_sum;
		}

		if(current_sum<0){
			current_sum = 0;
		}
	}

	return best_sum;
}

long long kconcatenation(int a[],int n,int k){
	long long max_prefix = INT_MIN,prefix = 0L;
	long long max_suffix = INT_MIN,suffix = 0L;
	long long totalsum=0L;
	long long result = 0;
	long long  kadaneresult = kadane(a,n); 
	for(int i=0;i<n;i++){
		prefix +=a[i];
		max_prefix = max(max_prefix,prefix);
	}

	totalsum = prefix;

	for(int i=n-1;i>=0;i--){
		suffix+=a[i];
		max_suffix =max(max_suffix,suffix);
	}

	if(totalsum<0){
		result = max(max_prefix+max_suffix,kadaneresult);

	}else{
		result = max(max_prefix+max_suffix+(totalsum*(k-2)),kadaneresult);

	}

	return result;

}


int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];

		cout<<kconcatenation(a,n,k)<<endl;
	}

	return 0;
}