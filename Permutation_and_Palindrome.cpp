#include<bits/stdc++.h>
using namespace std;

char getChar(int i){
	return (char) i+97;
}

void printPallindromeString(string str){

	map<char,vector<int>>hashIndex;

	int n = str.length();

	for(int i=0;i<n;i++){
		hashIndex[str[i]].push_back(i);
	}

	int odd_count = 0;

	for(int i=0;i<26;i++){
		if(hashIndex[getChar(i)].size()%2==1)odd_count++;
	}

	if(odd_count>1){
		cout<<"-1"<<endl;
		return;
	}

	int arr[n];
	int start = 0;
	int end = n-1;
	for(int i=0;i<26;i++){
		char current = getChar(i);
		for(int j=0;j<hashIndex[current].size();j+=2){

			if((hashIndex[current].size()-j)==1){
				arr[n/2]=hashIndex[current][j];
				continue;
			}

			arr[start] = hashIndex[current][j];
			arr[end] = hashIndex[current][j+1];
			start++;
			end--;

		}

	}

	for(int i=0;i<n;i++)cout<<arr[i]+1<<" ";
	cout<<endl;


}

int main()
{

	// freopen("addin.txt","r",stdin);
	// freopen("addout.txt","w",stdout);

	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		printPallindromeString(str);
	}

	return 0;
}