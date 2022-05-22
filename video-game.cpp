#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int n,h;
  cin>>n>>h;
  vector<int> arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  int i = 0;
  int flag = 0;
  while(1){
  	int t;
  	cin>>t;
  	if(t==0){
  		break;
  	}
  	else if(t==1 and i!=0){
  			i--;
  	}
  	else if(t==2 and i!= n-1){
  			i++;
  	}else if(t==3 and flag !=1 and arr[i]>0 ){
  		
  			arr[i]--;
  			flag = 1;
  		
  	}else if(t==4 and flag == 1 and arr[i]<h){
  			arr[i]++;
  			flag=0;
  	}
  }

  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	return 0;
}