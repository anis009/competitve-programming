#include<bits/stdc++.h>
using namespace std;
vector<int>bit;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

  ios_base::sync_with_stdio(0);

  cin.tie(NULL); 

  cout.tie(NULL);

  int n;cin>>n;
  
  vector<int>a(n);
  
  for(auto &i:a)cin>>i;
  
  vector<int> temp = a;
  
  sort(temp.begin(),temp.end());

  for(int i=0;i<n;i++){
  	a[i]  = lower_bound(temp.begin(),temp.end(),a[i])-temp.begin()+1;
  }


   bit = vector<int>(n+1);
   int inv = 0;
   
  for(int i=0;i<n;i++)cout<<a[i]<<" ";
  cout<<endl;


	return 0;
}