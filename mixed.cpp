#include<bits/stdc++.h>
using namespace std;
int main()
{


	freopen("mixin.txt","r",stdin);
	freopen("mixout.txt","w",stdout);

	long long int n,d,a,b;
	cin>>n>>d;
	int flag=0;
	for(int i=0;i<=d;i++){
		b=i;
		a=(n-b)/d;

		if((a*d + b) == n ){
			flag = 1;
			if(b==0){
				cout<<a<<endl;
			}else{
		   	cout<<a<<" "<<b<<"/"<<d<<endl;

			}
			return 0;
		}
	}


	if(flag==0){
		cout<<0<<endl;
	}

  return 0;
}