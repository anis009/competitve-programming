#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	
	vector<int>res;
	vector<int>reverse;
	
	int n = arr.size();
	
	for(int i=0;i<=m;i++){
		res.push_back(arr[i]);
	}
	for(int i =m+1;i<n;i++){
		reverse.push_back(arr[i]);
	}	
	for(int i=reverse.size()-1;i>=0;i--){
		res.push_back(reverse[i]);
	}
	
	for(int i=0;i<n;i++)arr[i]=res[i];
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;

	
}

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>arr(n);
		for(int i=0;i<n;i++)cin>>arr[i];

		reverseArray(arr,m);
	}	

	return 0;
}