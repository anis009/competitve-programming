#include<bits/stdc++.h>
using namespace std;



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

		int sum = 0;
		
		for(int i=0;i<n;i++){
			
			cin>>a[i];
			sum+=a[i];

		}

		long rightSum=0,leftSum=0;
		
		int flag=0; 

		for(int i=0;i<n;i++){

			if(leftSum == sum - leftSum - a[i]){
				cout<<i<<endl;
				flag = 1;
				break;
			}
			
			leftSum+=a[i];
		}
		
	  if(flag == 0 ) cout<<-1<<endl;
		
	}



	return 0;

}