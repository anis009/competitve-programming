#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int t;
  cin>>t;
  while(t--){
  	int x,y;
  	int a = 500,b=1000; 
  	cin>>x>>y;


  	int res1 = (a - (x*2))+(b-(x+y)*4);
  	int res2 = (b-y*4)+ a-(x+y)*2;
  	cout<<max(res1,res2)<<endl;

  }

	

	return 0;
}