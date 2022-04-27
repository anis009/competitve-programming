#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
 
  int n,t;
  cin>>t>>n;
  while(t--){
	  	
		int** arr = new int*[n];

		for(int i=0;i<n;i++){
			arr[i] = new int[n];
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}
		int sum=0;

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i == j and i+j == n-1 ){
					sum+=arr[i][j];
				}
				else if(i == 0 or j == 0 or i == n-1 or j == n-1){
					sum+=arr[i][j];
				}
			}
			
		}
		
		cout<<sum<<endl;

		for(int i=0;i<n;i++){
			delete arr[i];
		}

		delete[] arr;

  }


	
	return 0;
}