#include<bits/stdc++.h>
using namespace std;

 bool isLucky(int n) {
        // code here
        int max = 100001;
        vector<int>v;
        for(int i=1;i<max;i+=2){
            v.push_back(i);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        
        for(int i=2;i<v.size();i+=3){
            v[i]=-1;
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        
        for(int i=0;i<v.size();i++){
            if(v[i] == n){
                return true;
            }
        }
        
        return false;
    }


int main()
{

    // freopen("addin.txt","r",stdin);
    // freopen("addout.txt","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 
    cout.tie(NULL);

    cout<<isLucky(51)<<endl;



return 0;
}