#include<bits/stdc++.h>
using namespace std;

long long c=0;

void conquare(int *a,int si,int mid,int ei){
	int* merged = new int[ei-si+1];
	int x=0;
	int idx1 = si;
	int idx2 = mid+1;

	while(idx1<=mid and idx2<=ei){
		if(a[idx1]>a[idx2]){
			merged[x++] = a[idx2++];

			c = c + (mid-idx1+1); 
		
		}else{
			merged[x++] = a[idx1++];
		}
	}

	while(idx1<=mid){
		merged[x++] = a[idx1++];
	}

	while(idx2<=ei){
		merged[x++] = a[idx2++]; 
	}

	for(int i=0,j=si;i<(ei-si+1);i++,j++){
		a[j] = merged[i];
	}

	delete [] merged;

}


void divide(int* a,int si,int ei){
	if(si>=ei){
		return;
	}

	int mid = si + (ei-si)/2;
	divide(a,si,mid);
	divide(a,mid+1,ei);
	conquare(a,si,mid,ei);

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
		divide(a,0,n-1);
		cout<<c<<endl;
		c=0;
		//for(int i=0;i<n;i++)cout<<a[i]<<" ";
		//cout<<c<<endl;	

	}
	

	return 0;
}