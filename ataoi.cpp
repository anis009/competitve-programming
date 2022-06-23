#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
  bool digitseen = false;
  int length = s.length();
  bool isPlus = true;

  int sum=0;
  int mul=1;
 
  for(int i=length-1;i>=0;i--){
    
    char ch = s[i];
    if(ch=='-'){
      isPlus=false;
    }
    if(isdigit(ch)){
      int temp = (int) ch - 48;
      sum = sum + (temp*mul);
      cout<<sum<<endl;
      mul=mul*10;
      cout<<mul<<endl;       
      digitseen=true;
    } 
    if(ch=='.'){
      break;
    }

  }
  if(!isPlus){
    sum=-1*sum;
  }

  return sum; 
    
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  cout<<myAtoi("")<<endl;

	return 0;
}