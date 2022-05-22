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
  	int n;
  	cin>>n;
  	int t1=0,t2=0;
  	for(int i=0;i<n;i++){
  		string str;
  		cin>>str;
  		if(str == "START38"){
  			t1++;
  		}else{
  			t2++;
  		}
  	}

  	cout<<t1<<" "<<t2<<endl;

  }

	

	return 0;
}