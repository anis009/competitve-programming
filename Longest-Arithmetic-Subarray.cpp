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
 int maxlength = 0;
 int prev = INT_MAX;
 int count =2;
 int t=-1;
for(int i=1;i<n;i++){
  t = a[i] - a[i-1];
	if(prev == t){
		count++;
	}else{
		count=2;
	}
   prev = t;
	maxlength = max(maxlength,count);
}

cout<<maxlength<<endl;
	

	return 0;
}