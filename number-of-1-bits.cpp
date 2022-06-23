#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
    string st = n; 
    cout<<st<<endl;
    int count=0;
    for(int i=0;i<st.length();i++){
        if(st[i]=='1')count++;
    }
    return count;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  cout<<hammingWeight(00000000000000000000000000001111)<<endl;
  
  
	return 0;
}