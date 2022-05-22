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
  for(int i=0;i<n;i++)cin>>a[i];

  for(int i=0;i<n;i++){
  	cout<<a[i]<<" ";
  	for(int j=i+1;j<n;j++){
  		cout<<a[j]<<" ";
  	}
  	cout<<endl;
  }


	

	return 0;
}