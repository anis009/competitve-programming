#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  
  vector<int>v{-1,2,3,4};
  
  int n=4;
  
  int prefixsum[n+1];
  prefixsum[0] = 0;
  
  for(int i=1;i<=n;i++){
  	prefixsum[i] = prefixsum[i-1]+v[i-1];
  	//cout<<prefixsum[i]<<" ";
  }
  cout<<endl;
  
  int mx = INT_MIN;
  
  for(int i = 1;i<=n;i++){
  	int sum = 0;
  	for(int j=0;j<i;j++){
  		sum = prefixsum[i]-prefixsum[j];
  		cout<<sum<<endl;
  		mx = max(mx,sum);
  	}
  	cout<<endl;
  }

  cout<<mx<<endl;

	return 0;
}