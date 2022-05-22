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
  	vector<pair<int,int>>a;
  	vector<pair<int,int>>b;

  	for(int i=0;i<n;i++){
  		int t;
  		cin>>t;
  		a.push_back({t,i});
  	}

  	for(int i=0;i<n;i++){
  		int t;
  		cin>>t;
  		b.push_back({t,i});
  	}
  	sort(a.begin(),a.end());
  	sort(b.begin(),b.end());

  	for(int i=n-1,j=0;i>=0;i--){
  		if()
  	}

  }
	

	return 0;
}