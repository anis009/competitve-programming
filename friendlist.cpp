#include<bits/stdc++.h>
using namespace std;
int main()
{

	freopen("listin.txt","r",stdin);
	freopen("listout.txt","w",stdout);

	int index[1001];
	for(int i=0;i<=1000;i++){
		index[i]=0;
	}

	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		index[a]++;
		index[b]++;
	}
	int t=0;
	int res;
	int max=0;
	int both;
	for(int i=0;i<=1000;i++){
		if(index[i]>max){
			max=index[i];
			res=i;
		}
	}

	for(int i=0;i<=1000;i++){
		if(index[i] == max){
			cout<<i<<endl;
		}
	}
	cout<<endl;


	return 0;
}