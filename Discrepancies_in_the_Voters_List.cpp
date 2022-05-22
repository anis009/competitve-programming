#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int m,k,o;
	cin>>m>>k>>o;
	int n = m+k+o;
	map<int,int>mp;
	map<int,int>::iterator it;
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		mp[t]++;
	}
	
	vector<int> v;
	
	for(it = mp.begin();it!= mp.end();it++){
		if(it->second>=2){
			v.push_back(it->first);
		}
	}

	cout<<v.size()<<endl;

	for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

	return 0;
}