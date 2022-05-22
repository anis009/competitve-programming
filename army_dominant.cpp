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
  	int a,b,c;
  	cin>>a>>b>>c;
  	if(a+b<c or c+a<b or c+b<a){
  		cout<<"YES"<<endl;
  	}else{
  		cout<<"NO"<<endl;
  	}
  }



	

	return 0;
}