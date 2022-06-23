#include<bits/stdc++.h>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int d[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int maxv = INT_MIN;
    for(int i=0;i<n;i++){
      cin>>d[i];
      maxv = max(maxv,d[i]);
    }
    
    vector<pair<int,int>> vp;
    
    for(int i=0;i<n;i++){
      vp.push_back({a[i],d[i]});
    }
    
    vector<int>hash(maxv+1,0);

    for(int i=0;i<n;i++){
      int j=vp[i].first;
      while(j<=(vp[i].second - 1)){
        hash[j]++;
        j++;
      }
    }
    int maxr = INT_MIN;
    for(int i=0;i<=maxv;i++){
      maxr = max(hash[i],maxr);
    }

    cout<<maxr<<endl;

  }
  
	return 0;
}