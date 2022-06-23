#include<bits/stdc++.h>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  
  
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  //cout<<"anis";
  sort(a,a+n);//nlogn
  int sum=0; 
  int flag=0;
  
  for(int i=0,j =n-1;i<j;){
    sum=a[i]+a[j];
    if(sum>k){
      j--;
    }
    else if(sum<k){
      i++;
    }

    if(sum==k){
      flag=1;
      cout<<a[i]<<" "<<a[j]<<endl;
      break;
    }
  }

  if(flag==0){
    cout<<"-1"<<endl;
  }

  
	return 0;
}