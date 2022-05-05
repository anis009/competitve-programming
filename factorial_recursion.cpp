#include<bits/stdc++.h>
using namespace std;
int facto(int n){
	return n*facto(n-1);
}

int sum(int n){
	if(n==0){
		return 0;
	}
	return n+sum(n-1);
}
int fib(int n){
	if(n==0)return 0;
	if(n==1)return 1;
	return fib(n-1)+fib(n-2);
}

int pow(int base,int p){
	if(p==0){
		return 1;
	}
	return base*pow(base,p-1);
}

void printNumber(int n,int i){
	cout<<i<<endl;
	if(n==i){
		return;
	}

	return printNumber(n,i+1);
}

int numberDigit(int n,int sum){
	if(n==0){
		return 1;
	}
	sum = sum + numberDigit(n/10,sum);
	return sum;
}

int arraySum(int *a ,int n,int i,int sum){
	
	if(i>=n){
		return 0;
	}

	sum = sum + a[i] + arraySum(a,n,i+1,sum);

	return sum; 
}

bool isExist(int *a,int size,int num){
	if(size == -1){
		return false;

	}
	if(a[0]==num)return true;

	int is = isExist(a+1,size-1,num);

	return is;
}

int indexCheck(int *a ,int size,int num ,int i){
	if(size <0){
		return -1;
	}

	if(a[0] == num){
		return i;
	}

	return indexCheck(a + 1,size-1,num,i+1);
}

int main()
{


	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int n;
	int base,p;
	cin>>n>>p;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<indexCheck(a,n,p,0)<<endl;

	

	return 0;
}