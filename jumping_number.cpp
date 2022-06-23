#include<bits/stdc++.h>
using namespace std;

long long jumpingNums(long long X) {
  
  for(int i=X;i>0;i--){
    int n=i;

  }
}

int bfs(int x,int num){
  queue<int>q;
  q.push(num);
  while(!q.empty()){    
    num = q.front();
    q.pop();
    if(num<=x){
      cout<<num<<" ";
      int last = num%10;
      if(last==0){
        q.push( (num*10) + (last+1));
      }
      else if(last==9){
        q.push((num*10) + (last -1));
      }
      else{
        q.push((num*10)+(last+1));
        q.push((num*10)+(last-1));
      }
    }
  }
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  for(int i=1;i<=9 and i<=10000;i++){
    bfs(10000,i);
  }


  
  
	return 0;
}