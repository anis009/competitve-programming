#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int team1,team2;

	for(int i=0;i<n/2;i++){
		team1 = a[i];
		team2 = a[n - i - 1];
		int sum;
		sum = team1 + team2;
		int groups;
		groups = sum/10;
		int rest = sum%10;
		cout<<groups<< " "<<rest<<endl;
	}

	return 0;
}