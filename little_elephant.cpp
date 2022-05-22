#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int k,n;
  cin>>k>>n;
  vector<string>st;
 
  for(int i=0;i<k;i++){
  	string s;
  	cin>>s;
  	st.push_back(s);
  }

  for(int i=0;i<n;i++){
  	string s;
  	cin>>s;
  	int len = s.length();
  	if(len>=47){
  		cout<<"Good"<<endl;
  	}
  	else{
  		int flag = 0;
  		for(int j=0;j<k;j++){
  			string t;
  			t = st[j];
  			if(s.find(t) != string::npos){

  				cout<<"Good"<<endl;
  				flag = 1;
  				break;
  			}
  		}

  		if(flag == 0){
  			cout<<"Bad"<<endl;
  		}
  	}
  }	

	return 0;
}