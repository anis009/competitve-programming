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
  vector<long long> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sort(v.begin(),v.end());
  long long mx = INT_MIN;
  int t=n; 
  for(int i=0;i<n;i++){
  	mx = max(mx,max(v[i]*t,v[i]));
  	//cout<<"max"<<mx<<" t"<<t<<endl;
  	t--;
  }	

  cout<<mx<<endl;

	return 0;
}