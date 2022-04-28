#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	map<int,int> hash;

	for(int i=0;i<10;i++){
		hash[i]+=2;
	}

	cout<<hash[1]<<endl;
	
	return 0;
} 