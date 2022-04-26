#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
	int n;
	cin>>n;
	int ** arr = new int*[n];

	for(int i=0;i<n;i++){
		arr[i] = new int[n];
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}
		}else{
			for(int j=n-1;j>=0;j--){
				cout<<arr[i][j]<<" ";
			}
		}
	}

	for(int i=0;i<n;i++){
		delete arr[i];
	}

	delete[] arr;


	return 0;
}