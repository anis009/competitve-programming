#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];

  int maxelements = 0;
   
  for(int i=0;i<n;i++){
  	
  	if(maxelements<a[i] and a[i]>a[i+1]){
  		
  	}

  	maxelements = max(maxelements,a[i]);
  }

	return 0;
}