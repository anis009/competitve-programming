
#include<bits/stdc++.h>
using namespace std;

int minMoves(int target, int maxDoubles) {
    int res = target;
    
    int count = 0;

    while(res!=1){
        if(res%2 == 0 and maxDoubles != 0){
            res/=2;
            maxDoubles--; 
            count++;
        }else if(maxDoubles == 0){
            count+=(res-1);
            res=1; 
        }
        else{
            res--;
            count++;
        }

        // cout<<res<<endl;
    }

    return count;

}

int main()
{

    // freopen("addin.txt","r",stdin);
    // freopen("addout.txt","w",stdout);
  
  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);

  // int n;
  // cin>>n;
  // int t = judgeSquareSum(n);
  cout<<minMoves(5,0)<<endl;


    return 0;
}