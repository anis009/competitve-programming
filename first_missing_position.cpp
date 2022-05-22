#include<bits/stdc++.h>
using namespace std;

int firstMissing(int arr[], int n)
{
    // Write your code here.
	sort(arr,arr+n);
	
	int subtract; 
	int flag = 0;
	int temp;
	for(int i=0;i<n-1;i++){
		if(arr[i]>0 and arr[i+1]>0){
			subtract = abs(arr[i+1]-arr[i]);
			if(subtract>1){
				temp = arr[i]+1;
				break;
			}
		}

		if(arr[i]==1 || arr[i+1]==1){
			flag = 1;

		}
		
	}

	if(flag == 0){
		return 1;
	}else{
		return temp;
	}
	
	return arr[n-1]+1;
	
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
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<firstMissing(a,n)<<endl;
	}
	

	return 0;
}