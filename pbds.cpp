#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type, less<int>,rb_tree_tag,tree_order_statistics_node_update>pbds;


int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  pbds A;

  A.insert(1);
  A.insert(2);
  A.insert(3);
  A.insert(4);
  A.insert(5);

  // for(auto i:A){
  // 	cout<<i<<" ";
  // }

  cout<<*A.find_by_order(2)<<endl;

 // cout<<A.order_of_key(5)<<endl;

  cout<<*A.lower_bound(5)<<endl;
	

	return 0;
}