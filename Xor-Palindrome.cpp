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
  	string str;
  	cin>>n>>str;
  	int mid = n/2;
  	int temp=0; 
 
		for(int i=0,j=n-1;i<mid;i++){
		   if(str[i]!=str[j]){
		   	temp++;
		   }
		   j--;	
		}
  	
  		

  	cout<<(temp+1)/2<<endl;



  }

	return 0;
}