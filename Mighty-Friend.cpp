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
    
    int n,k;
    
    cin>>n>>k;
    
    int a[n];
    
    for(int i=0;i<n;i++)cin>>a[i];
    
    long long int msum=0L,tsum=0L;
    
    vector<int>mv;
    
    vector<int>tv;

    for(int i=0;i<n;i++){
      if(i%2==0){
        mv.push_back(a[i]);
        msum+=a[i];
      }
      else {
        tsum+=a[i];
        tv.push_back(a[i]);
      }
    }
    if(tsum>msum){
      cout<<"YES"<<endl;
    }
    else{
       sort(mv.begin(),mv.end());

       sort(tv.begin(),tv.end());
       
       int j = mv.size()-1;
       
       int i = 0;
       
       while(k>0 and j>=0 and i<tv.size()){
        msum=msum - mv[j] + tv[i];
        tsum = tsum + mv[j] - tv[i];
        i++;
        j--;
        k--;
       }


       if(msum>=tsum){
        cout<<"NO"<<endl;
       }else{
        cout<<"YES"<<endl;
       }

    }
   
    
  }
  
  
	return 0;
}