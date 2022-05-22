#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums, int k) {
        
        int n = nums.size();
        int t = 0;
        for(int i= (n-(k%n));i<n;i++){
            nums.insert(nums.begin()+t,nums[i+t]);
            t++;
        }
        
        // vector<int>cp;
        
        // for(int i= (n-(k%n));i<n;i++){
        //     cp.push_back(nums[i]);
        // }

        // for(int i=0;i<(n- (k%n));i++){
        //     cp.push_back(nums[i]);
        // }

        // nums.clear();

        // for(int i=0;i<cp.size();i++)nums.push_back(cp[i]);

        nums.erase(nums.begin()+n,nums.end());

        for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
        
}


int main()
{

    // freopen("addin.txt","r",stdin);
    // freopen("addout.txt","w",stdout);

    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    rotate(a,k);

    

    return 0;
}