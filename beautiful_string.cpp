
#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

  int t;
  cin>>t;
  while(t--){
  	string str;
  	char t;
  	cin>>str;
  	int n = str.length();
  	
  	t = str[0];
  	
  	int need = 0;
  	int needReverse = 0;
  	
  	for(int i=1;i<n;i+=2){
  		if(str[i] == t){
  			++need;
  		}
  	}

  	for(int i=2;i<n;i+=2){
  		if(str[i] != t){
  			++need;
  		}
  	}

  	for(int i=1;i<n;i+=2){
  		if(str[i] != t){
  			++needReverse;
  		}
  	}

  	for(int i=0;i<n;i+=2){
  		if(str[i] == t){
  			++needReverse;
  		}
  	}

  	cout<<min(need,needReverse)<<endl;

  }
	




	return 0;
}