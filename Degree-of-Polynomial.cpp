#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	int a[n];
  	for(int i=0;i<n;i++){
  		cin>>a[i];
  	}
  	int ans=0;
  	int temp=0;
  	for(int i=0;i<n;i++){
  		temp++;
  		if(a[i]!=0){
  			ans=temp;
  		}
  	}
  	if(ans!=0)
  		ans--;
  	cout<<ans<<endl;

  }

	

	return 0;
}