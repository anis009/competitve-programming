#include<bits/stdc++.h>
using namespace std;
int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	// string s = "anismolla";
	// string s1(s,2,5);
	// string s2(s,2,4);
	// cout<<s2<<endl;

	unordered_map<int,int> mp;
	unordered_map<int,int>::iterator it;
	map<int,int> m;
	map<int,int>::iterator it1;
	int a[] = {1,2,3,4,5,6,6,6,1,2,3};

	for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){

		mp[a[i]]++;
		m[a[i]]++; 

	}

	for(it = mp.begin();it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}

	cout<<"map"<<endl;


	for(it1 = m.begin();it1!=m.end();it1++){
		cout<<it1->first<<" "<<it1->second<<endl;
	}
	int n = m.rbegin()->first;
	cout<<"End: "<<n<<endl;

	// int arr[] = {2,3,4,1,2,6};

	// sort(arr+2,arr+6,greater<int>());
	// for(int i=0;i<6;i++)cout<<arr[i]<<" ";

	

	

	return 0;
}