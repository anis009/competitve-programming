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
  	int n,m;
  	cin>>n>>m;
  	vector<pair<int,int>> v;
  	for(int i=0;i<n;i++){
  		int t1,t2;
  		cin>>t1>>t2;
  		v.push_back({t1,t2});  		
  	}

  	sort(v.begin(),v.end());

  	while(m--){
  		int current_time;
  		cin>>current_time;

  		int position = lower_bound(v.begin(),v.end(),make_pair(current_time,0))-v.begin();

  		if(position==0){
  			cout<<v[position].first-current_time<<endl;

  		}else{
  			int ans = -1;
  			if(v[position-1].second>current_time){
  				ans = 0;
  			}
  			else if(position<v.size()){
  				ans = v[position].first - current_time;
  			}
  			cout<<ans<<endl;
  		}

  	}

  	//for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;

  }
	return 0;
}