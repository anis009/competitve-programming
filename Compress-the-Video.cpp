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
  	vector<int> v(n);
  	vector<int> b;
  	for(int i=0;i<n;i++)cin>>v[i];
  	b.push_back(v[0]);
    for(int i=1;i<n;i++){
    	if(v[i] !=b.back()){
    		b.push_back(v[i]);
    	}
    }
    cout<<b.size()<<endl;
      }

	

	return 0;
}