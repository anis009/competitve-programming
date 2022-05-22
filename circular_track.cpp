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
  	int a,b,m;
  	cin>>a>>b>>m;

  	long long int temp1,temp2;

  	temp1 = min(abs(a-b),min(abs( (a + (m-b))) ,(abs(m-a)+b)));

  	cout<<temp1<<endl;
  }



	

	return 0;
}