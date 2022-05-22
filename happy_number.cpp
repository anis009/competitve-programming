#include<bits/stdc++.h>
using namespace std;

int sumdigit(int n){
	long long sum = 0;

	while(n!=0){
		int t;
		t = n%10;
		sum += t*t;
		n = n/10;
	}

	return sum;

}

bool isHappy(int n){
	if(n==1)return true;
	map<int,int>hash; 
	while(n!=1){
		n = sumdigit(n);
		if(hash[n]>1)return false;
		hash[n]++;
	}

	return true;
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
  cout<<isHappy(n)<<endl;



	

	return 0;
}