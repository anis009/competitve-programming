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
    string pr="";
    for(int i=0;i<2;i++){
      string st;
      cin>>st;
      pr+=st;
    }
    int prhash[27];
    for(int i=0;i<27;i++){
      prhash[i]=0;
    }
    for(int i=0;i<pr.length();i++){
      int t = (int) 'a'- pr[i];
      t = abs(t);
      prhash[t]++;
    }
    int n;
    cin>>n;
    string child="";
    for(int i=0;i<n;i++){
      string st;
      cin>>st;
      child+=st;
    }
    int childhash[27];
    for(int i=0;i<27;i++){
      childhash[i]=0;
    }
    for(int i=0;i<child.length();i++){
      int t = (int) 'a'- pr[i];
      t = abs(t);
      childhash[t]++;
    }
    if(child.length()>pr.length()){
      cout<<"NO"<<endl;
    }
    else{
      int flag = 0;
      for(int i=0;i<child.length();i++){
        int t=(int) 'a'- child[i];
        t = abs(t);
        if(childhash[t]>prhash[t] or prhash[t] == 0){
          cout<<"NO"<<endl;
          //cout<<childhash[t]<<" "<<prhash[t]<<endl;
          flag=1;
          break;
        }
      }
      if(flag==0){
        cout<<"YES"<<endl;
      }
    }
  }
  
	return 0;
}