#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	vector<vector<int>> v{
		{
		  1,2,3
	  },
	  {
	  	4,5,6,10,12,19,30,23
	  },

	  {
	  	7,8,9,10,11
	  }

  };

  for(int i=0;i<v.size();i++){
  	for(int j=0;j<v[i].size();j++){
  		cout<<v[i][j]<<" ";
  	}
  	cout<<endl;
  }

  for(vector<int> vD1: v){

  	for(int x: vD1){
  		cout<<x<<" ";
  	}
  	cout<<endl;
  }


	
	return 0;
}