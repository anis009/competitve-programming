#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>&nums,int n){
	int sum=0;
	int maxsum = INT_MIN;
	for(int i=0;i<n;i++){
		sum+=nums[i];
		if(sum<0){
			sum=0; 
		}
		maxsum = max(maxsum,sum);
		
	}

	return maxsum;
}

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  vector<int> nums{-3,-2,-3};
  int sum1 = kadane(nums,nums.size());
  int total = 0;
  for(int i=0;i<nums.size();i++){
  	total+=nums[i];
  	nums[i]=-nums[i];
  }

  int sum2 = kadane(nums,nums.size());

  cout<<max(sum1,(sum2+total))<<endl;

	return 0;
}