#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	int rows = n;
	int cols = m;
	int r = 0;
	int c = 0;
	int i;

	vector<int>path;

	while(r<rows && c<cols){
	
		for(i = c;i<cols;i++) path.push_back(a[r][i]);
		r++;
	
	  for(i = r;i<rows;i++)path.push_back(a[i][cols-1]);
	  cols--;

		if(c<cols){
		  for(i = cols-1;i>=c;i--)path.push_back(a[rows-1][i]);
		  rows--;
		}

		if(r<rows){
			for(i = rows - 1;i>=r;i--)path.push_back(a[i][c]);
     	c++;

		}
	}

	for(int i=0;i<path.size();i++)cout<<path[i]<<" ";	

	return 0;

}