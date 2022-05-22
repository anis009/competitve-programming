#include<bits/stdc++.h>
using namespace std;
int* tree;
int n;
int query(int idx){
	long long sum = 0;
	while(idx>0){
		sum = sum+tree[idx];
		idx-=(idx&(-idx));
	}
	return sum;
}

void update(int idx,int value){
	while(idx<=n){
		tree[idx]+=value;
		// cout<<idx<<endl;
		idx+=(idx&(-idx));
	}
}

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  int t;
  
  cin>>n>>t;
  int a[n];
  tree = new int[n+1];

  for(int i=1;i<=n;i++){
  	tree[i] = 0;
  }

  for(int i=0;i<n;i++){	
  	cin>>a[i];
  	update(i+1,a[i]);
  }
  
  //for(int i=1;i<=n;i++)cout<<tree[i]<<" ";

  while(t--){
  	int l,r;
  	cin>>l>>r;
  	cout<<query(r) - query(l-1)<<endl;
  }

  delete [] tree;

	
	return 0;
}