#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	long long int a=1,b,fib=1;
	
	cout<<1<<" "<<1<<" ";
	
	for(int i=0;i<100;i++){
		b = fib;
		fib = fib + a;
		cout<<fib<<" ";
		a = b;

	}


	return 0;
}