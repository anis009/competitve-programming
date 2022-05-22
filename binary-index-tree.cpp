#include<bits/stdc++.h>
#define mx 10000
using namespace std;

int arr[mx];
int tree[mx];

int query(int idx){
	int sum = 0;
	while(idx>0){
		sum+=tree[idx];
		idx-=(idx & (-idx));
	}
	return sum;
}

void update(int idx,int value,int n){
	while(idx<=n){
		tree[idx]+=value;
		idx+=(idx & (-idx));
	}
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
  for(int i=1;i<=n;i++){
  	cin>>arr[i];
  	update(i,arr[i],n);
  }

  for(int i=1;i<=n;i++)cout<<tree[i]<<" ";
 
	return 0;
}