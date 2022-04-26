#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);
	int n ,p1=0,p2=0;
		int a,b,sum1=0,sum2 = 0;
	cin>>n;
	while(n--){
	
		cin>>a>>b;
		sum1+=a;
		sum2+=b;

		if(sum1>sum2){
			if((sum1- sum2)>p1){
				p1=sum1-sum2;
			}

		}else if(sum2>sum1){
			if((sum2 - sum1) >p2){
				p2 = sum2 - sum1;
			}
		}		

	}

	if(p1>p2){
		cout<<1<<" "<<p1;
	}else{
		cout<<2<<" "<<p2;
	}

	
	return 0;
}