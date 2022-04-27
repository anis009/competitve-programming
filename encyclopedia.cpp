#include<bits/stdc++.h>
using namespace std;
int main()
{

	freopen("encyin.txt","r",stdin);
	freopen("encyout.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1];

	for(int i=0;i<n;i++){
		cin>>a[i+1];
	}

	for(int i=0;i<m;i++){
		cin>>b[i+1];
	}

	for(int i=0;i<m;i++){
		cout<<a[b[i+1]]<<endl;
	}


	return 0;
}