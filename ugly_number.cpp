#include<bits/stdc++.h>

using namespace std;

bool seive(int n){
  
  bool prime[n+1];
  
  memset(prime,true,sizeof(prime));

  for(int i=2;i*i<=n;i++){
  	if(prime[i]== true){
  		for(int j = i*i;j<=n;j+=i){
  			prime[j] = false;
  		}
  	}
  }
  int counter = 0;
  for(int i = 7;i<=n;i++){
  	if(prime[i] == true and n%i == 0){
  		counter++;
  	}
  }
  if(counter>0){
  	return false;
  }
  else{
  	return true;
  }

}

bool isUgly(int n) {

	return seive(n);
    
}



int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int n;
  cin>>n;
  cout<<isUgly(n)<<endl;

	

	return 0;
}