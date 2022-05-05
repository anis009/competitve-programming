#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int n;
	cin>>n;
	int a[n];
	long long prefixSum[n+1];
	prefixSum[0] = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		prefixSum[i] = prefixSum[i-1]+a[i-1];
	}

	for(int i=1;i<=n;i++){
		cout<<prefixSum[i]<<" ";
	}
	cout<<endl;


  int minValue = INT_MAX;
  int minIndex = 0;
  for(int i=1;i<=n;i++){
  	int fpart = (prefixSum[i]/(i));
  	int lpart = 0;
  	if((n-i)!=0){
  	  lpart = ((prefixSum[n]-prefixSum[i])/(n-i)); 
  	}
  	int div = abs(fpart - lpart);
  	if(minValue>div){
  		minValue = div;
  		minIndex = i;
  	}
  }

  cout<<minIndex-1<<endl;

	return 0;
}