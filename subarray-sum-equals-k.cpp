#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
  int n = nums.size();
  int prefixsum[n+1];
  prefixsum[0]=0;
  map<int,int>hash;
  map<int,int>::iterator it;
  for(int i=1;i<=n;i++){
      prefixsum[i] = prefixsum[i-1]+nums[i-1];
      cout<<prefixsum[i]<<" ";
  }
  int count = 0;
  for(int i=1;i<=n;i++){
      if(prefixsum[i]==k){
          count++;
      }

      if (hash[prefixsum[i]-k]>0){
          count+=hash[prefixsum[i]-k];
      }
      
      hash[prefixsum[i]]++;
      
  }


  for(it = hash.begin();it!=hash.end();it++){
  	cout<<it->first<<" "<<it->second<<endl;
  }       
  
  return count;
}

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  vector<int>v{1,2,3};
  
   cout<<subarraySum(v,3)<<endl;

	

	return 0;
}