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
  	int res = INT_MIN;
  	for(int i=0;i<4;i++){
  		int temp;
  		cin>>temp;
  		res = max(res,temp);
  	}

  	cout<<res<<endl;
  }

	

	return 0;
}