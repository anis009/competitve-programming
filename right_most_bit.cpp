#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int mask = 1;
	int n;
	int counter = 1;
	cin>>n;
	while(n){
		if(n&mask)break;
		n=n>>1;
		counter++; 
	}
	cout<<counter<<endl;
	

	return 0;
}