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
  	long long int n;
  	cin>>n;
  	int limit = sqrt(n)+1;
  	// cout<<limit<<endl;
  	int flag = 0;
  	if(n%2 == 0 and n!=2){
  		cout<<"NO"<<endl;
  	}else{
  		for(int i=3;i<=i*i;i++){
  			if(n%i==0 and n!=i){
  				cout<<"NO"<<endl;
  				flag = 1;
  				break;
  			}
  		}

  		if(flag == 0){
  			cout<<"YES"<<endl;
  		}
  		flag = 0;
  	}
  }
	return 0;
}