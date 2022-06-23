#include<bits/stdc++.h>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long int count = 0L;
    for(int i=1;i<=n;i+=2){
      int t = (n-i+1);
      count+=t*t;
    }

    cout<<count<<endl;
  }
  
  
	return 0;
}