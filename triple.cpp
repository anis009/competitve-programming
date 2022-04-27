#include<bits/stdc++.h>
using namespace std;
int main()
{

	freopen("tripin.txt","r",stdin);
	freopen("tripout.txt","w",stdout);
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		if(t%3==0){
   		v.push_back(i+1);
		}
	}
	if(v.size()==0){
		cout<<"Nothing here!"<<endl;
		return 0;
	}
  cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}