#include<bits/stdc++.h>
using namespace std;


int subarraysDivByK(vector<int>& nums, int k) {
    
    int n = nums.size();
    int prefixsum = 0;
    map<int,int>dp;
    dp[0]=1;
    int count = 0;

    for(int i=0;i<n;i++){
        prefixsum+=nums[i];
        int rem = prefixsum%k;
        if(rem<k){
            rem+=k;
        }
        
        count+=dp[rem];
        dp[rem]++;
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
  vector<int>v={4,5,0,-2,-3,1};
  cout<<subarraysDivByK(v,5)<<endl;
	return 0;
}