#include<bits/stdc++.h>
using namespace std;

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  vector<int>nums{23,2,4,6,7};
  int k=7;
  map<int,int>hash;
  int j=0;
  int sum=0;
  int n =nums.size();
  while(j<n){
  	sum+=nums[j];

  	if(sum == k or sum%k==0){
  		cout<<"yes";
  		break;
  	}

  	if(hash[sum-k]>0){
  		  		cout<<"yes";
  		  		break;
  	}

  	hash[sum-k]++;
  	j++;

  	}

  

	return 0;
}