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
  	
  	string str;
  	
  	cin>>str;
  	set<char>s;
  	s.insert('c');
  	s.insert('l');
  	s.insert('g');
  	s.insert('r');
    long long mod = 1e9+7;
    long long ans = 1l;
  	for(char ch:str){
  		if(s.find(ch)!=s.end()) {
  			ans = ans*2;
        ans%=mod;
  		}
  	}

  	cout<<ans<<endl;
  	

  }

	

	return 0;
}