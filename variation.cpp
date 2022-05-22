#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int n,k;

  cin>>n>>k;

  vector<int>arr(n);

  for(int i=0;i<n;i++)cin>>arr[i];

  // long long int c=0;
  // for(int i = 0;i<n;i++){
  // 	for(int j = i+1;j<n;j++){
  // 		if(abs(arr[i]-arr[j])>=k){
  // 			c++;
  // 		}
  // 	}
  // }

  sort(arr.begin(),arr.end());

	long long int c = 0;
  int j = 1;
  int i = 0;
  while(j<n){
  	
  	if(arr[j]-arr[i]){
  		c+=(n-j);
  		i++;
  	}
  	else{
  		j++;
  	}

  }

  cout<<c<<endl;

	return 0;
}