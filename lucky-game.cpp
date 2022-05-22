#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  pbds S;
  int t;
  cin>>t;
  int temp = 1;
  while(t--){
  	int n,a,b;
  	cin>>n>>a>>b;
  	vector<int> v(n);
  	for(int i = 0;i<n;i++){
      cin>>v[i];
    }
    int cm=0,bob=0,alice=0;
    for(int i=0;i<n;i++){
      if(v[i]%a == 0 and v[i]%b == 0){
        cm++;
      }else if(v[i]%a==0){
        bob++;
      }else if(v[i]%b==0){
        alice++;
      }
    }

    if(cm>0){
      bob++;
    }

    if(bob>alice){
      cout<<"BOB"<<endl; 
    }else{
      cout<<"ALICE"<<endl;
    }


  }



	

	return 0;
}