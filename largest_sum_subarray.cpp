#include<bits/stdc++.h>
using namespace std;

int kadane(int *arr,int n){
	int current_sum = 0;
	int best_sum = 0;
	for(int i=0;i<n;i++){
		current_sum +=arr[i];
		if(current_sum>best_sum){
			best_sum = current_sum;
		}
		if(current_sum<0){
			current_sum = 0;
		}
	}

	return best_sum;
}
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<kadane(a,n)<<endl;
	return 0;
}