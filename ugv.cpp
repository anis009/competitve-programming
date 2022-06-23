
#include <bits/stdc++.h>
 
using namespace std;

bool checkCharacter(string s){
  int length = s.length();
  for(int i=0;i<length;i++){
    if( (s[i]>='a' and s[i]<='z') or (s[i]>='a' and s[i]<='z') ){
      if(s[i]=='e' or s[i]=='E'){
        continue;
      }
      return false;
    }
  }
  return true;
}

bool checkE(string s){
  int length = s.length();
  int count = 0;
  for(int i=0;i<length;i++){
    if(s[i]=='e' or s[i]=='E'){

      count++;

      if(i>0 and s[i-1]== '.'){
        return false;

      }
      if(i<length-1){

        for(int j=i+1;j<length;j++){
          if(s[j]=='.'){
            return false;
          }
        }

      }else{
        
        return false;
      }
    }

    if(count>1){
      return false;
    }
  }

  return true;

}

bool checkDot(string s){
  int length = s.length();
  int count=0;
  for(int i=0;i<length;i++){
    if(s[i]=='.'){
      count++;
    }

    if(count>1){
      return false;
    }
  }

  return true;
}

bool checkSign(string s){
  
  int length = s.length();
  
  int count=0;
  
  if((s[0]=='-' or s[0]=='+') and (s[1]=='-' or s[1]=='+')){
    return false;  
  }
  int temp;
  for(int i=1;i<length;i++){
    
    if(s[i]=='+' or s[i]=='-'){
      return false;
    }

    if(s[i]=='e' or s[i]=='E'){
      temp=i;
      break;

    }

  }

  for(int i=temp+2;i<length;i++){
    if(s[i]=='+' or s[i]=='-'){
      return false;
    }
  }

  if(s[length-1]=='-' or s[length-1]=='+'){
    return false;
  }

  return true;
}
 
bool isNumber(string s) {

  int length = s.length();
  if(length==1){
    
    if(s[0]=='.' or s[0]=='-' or s[0]=='+' or s[0]=='e' or s[0]=='E'){
      return false;
    }

    return true;
  }
  bool isCharacter = checkCharacter(s);
  cout<<isCharacter<<endl;
  bool isExistE = checkE(s);
  cout<<isExistE<<endl;

  bool isDot = checkDot(s);
  cout<<isDot<<endl;
  
  bool isSign  = checkSign(s);
  cout<<isSign<<endl;
  
  return isCharacter;
}
int main()
{
    
  cout<<isNumber("2e-+3")<<endl;

  return 0;
}