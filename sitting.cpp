#include<bits/stdc++.h>
using namespace std;
int main()
{


	freopen("sitin.txt","r",stdin);
	freopen("sitout.txt","w",stdout);

	int r,c;
	cin>>r>>c;
	int t;
	cin>>t;

	int total = r*c;
	if(total>=t){
		cout<<t<<" "<<0<<endl;
	}else{
		cout<<total << " "<< t-total<<endl;
	}

return 0;
}