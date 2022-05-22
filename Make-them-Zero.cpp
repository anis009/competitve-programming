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
  	int maxv=INT_MIN;

  	for(int i=0;i<n;i++){
  		cin>>a[i];
  		maxv = max(maxv,a[i]);
  	}

  	int pw = log2(maxv);
  	int flag = 0,res=0;
  	for(int i=pw;i>=0;i--){
  		int temp = pow(2,i);
  		for(int j=0;j<n;j++){
  			if(a[j]>=temp){
  				a[j]-=temp;
  				flag=1;
  			}
  		}

  		if(flag==1){
  			res++;
  		}

  		flag=0;
  	}

  	cout<<res<<endl;

  }

	

	return 0;
}