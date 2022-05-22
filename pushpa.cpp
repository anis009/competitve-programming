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
  	
  	int a[n];
  	
  	for(int i=0;i<n;i++)cin>>a[i];

  	sort(a,a+n);
    long long int maxvalue=-1,sum=0;
    long long int t=1;
    for(int i=1;i<=n;i++){
    	if(a[i-1] == a[i]){
    		t++;
    	}
    	else{
    		maxvalue = max((t+a[i-1]-1),maxvalue);
    		//cout<<"a[i]="<<a[i-1]<<endl;
    		t=1;
    	}
    }

    cout<<maxvalue<<endl;

  }
	

	return 0;
}