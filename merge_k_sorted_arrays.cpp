#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		set<int>s;
		while(k--){
			int n;
			cin>>n;
			int a[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
				s.insert(a[i]);
			}			
		}

		for(auto it=s.begin();it!=s.end();it++){
			cout<<*it<<" ";
		}

		cout<<endl;
	}


	return 0;
}