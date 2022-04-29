#include<bits/stdc++.h>
using namespace std;

int totalProfit(int a[],int n,int current){
	
	if(current>=n){
	
		return 0L;
	
	}

	long long ans = 0L;

	for(int buying = current;buying<n;buying++){
		
		long long profit = 0L;
		
		for(int selling = buying + 1; selling < n; selling++ ){
			
			if(a[buying] < a[selling]){

				profit = a[selling] - a[buying] + totalProfit(a , n , selling + 1);
			
			}
		
		}



		ans = max(ans,profit);


	}

	return ans;

}


int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	
	cin>>t;

	while(t--){
	
		int n;

		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++){

			cin>>a[i];
		
		}
		
		long ans = totalProfit(a,n,0); 

		cout<<ans<<endl;

	}

	return 0;

}