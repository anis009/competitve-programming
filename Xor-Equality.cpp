#include<bits/stdc++.h>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  int mod = 1e9+7;
  vector<int>ans(100000);
  ans[1]=1;
  for(int i=2;i<=100000;i++){
    ans[i] = (ans[i-1]*2)%mod;
  }

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
  }

  
	return 0;
}