#include<bits/stdc++.h>
using namespace std;
int main()
{

	freopen("taktakin.txt","r",stdin);
	freopen("taktakout.txt","w",stdout);

	int n;
	cin>>n;
	int t=0;
	if((n-1)%11==0){
		cout<<0<<" "<<n<<endl;
		return 0;
	}
	int mul = n;

	while(1){
	  mul=mul*2;
	  t++;
	  if((mul-1)%11 == 0){
	  	cout<<t<<" "<<mul<<endl;
	  	return 0;
	  }
	}
	return 0;
}