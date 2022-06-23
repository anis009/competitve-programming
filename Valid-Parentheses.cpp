#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
   
  int len = s.length();
  
  stack<char>st;

  for(int i=0;i<len;i++){
    if(s[i]=='[' or s[i]=='{' or s[i]=='('){
      st.push(s[i]);
    }else{
      if(st.empty()){
        return false;
      }
      if(!st.empty()){
        if(st.top()== '(' and (s[i]==']' or s[i]=='}')){
          return false;
        }
        if(st.top()=='[' and (s[i]==')' or s[i]=='}')){
          return false;
        }

        if(st.top() == '{' and (s[i]==')' or s[i]==']')){
          return false;
        }

        st.pop();
      }
    }
  }

  if(!st.empty()){
    return false;
  }
  else{
    return true;
  }


}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  string s="({})";
  cout<<isValid(s)<<endl;
  
	return 0;
}