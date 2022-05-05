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
		for(int i=0;i<n;i++)cin>>a[i];

	  int max=0;

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i] and (a[j]-a[i])>max){

					max = a[j]-a[i];
					
				}
			}
		}	

		cout<<max<<endl;
	}

	

	return 0;
}