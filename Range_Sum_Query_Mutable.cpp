#include<bits/stdc++.h>
using namespace std;
int tree[10000];
int n;

void updateValue(int index,int val){

    while(index<=n){
        tree[index]+=val;
        index+=(index & (-index));
    }
}

int sumBit(int idx){
    idx++;
    int sum=0;
    while(idx>0){
        sum+=tree[idx];
        idx-=(idx&(-idx));
    }
    return sum;
}


int sumRange(int left, int right) {
    return sumBit(right)-sumBit(left-1);
}

void NumArray(int *nums) {
    
    for(int i=0;i<=n;i++)tree[i]=0;
    
    for(int i=0;i<n;i++)updateValue(i+1,nums[i]);
}


void update(int index, int val) {
    index++;
    val-=nums[index];
    nums[index]+=val;
    updateValue(index,val);
  
}



int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int t;
  
  cin>>t;

  n = t;
  
  int a[t];

  for(int i=0;i<t;i++){
  	cin>>a[i];
  }

  NumArray(a);

  for(int i=1;i<=t;i++ )cout<<tree[i]<<" ";

  cout<<sumRange(0,2)<<endl;
  update(1,2);
  for(int i=1;i<=t;i++ )cout<<tree[i]<<" ";
  cout<<sumRange(0,2)<<endl;



	

	return 0;
}