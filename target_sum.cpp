#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n,target;
		cin>>n>>target;
		int a[n];
		map<int,int>hashMap;
		vector<pair<int,int>>vect;

		for(int i=0;i<n;i++)cin>>a[i];

		for(int i=0;i<n;i++){
			int t = target - a[i];
			if(hashMap[t]){
				vect.push_back(make_pair(min(a[i],t),max(a[i],t)));
			}else{
				hashMap[a[i]] = a[i];
			}
		}

		for(int i=0;i<vect.size();i++){
			cout<<vect[i].first <<" "<<vect[i].second<<endl;
		}



	}

	

	return 0;
}