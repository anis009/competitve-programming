#include<bits/stdc++.h>
using namespace std;

int getDigit(char ch){
    
    return (int)ch - 48;
    
}

string digitSum(string s, int k) {
    int n = s.length();
    while(s.length()>k){
        string st="";
        
        for(int i=0;i<s.length();i+=k){
            int sum =0;
            for(int j=i;j<i+k and j<s.length();j++){
                int x = getDigit(s[j]);
                sum+=x;
                
            }
            
            st = st + to_string(sum);
        }
        s = st;
    }
    return s;
}



int main()
{

// freopen("addin.txt","r",stdin);
// freopen("addout.txt","w",stdout);

    string s;
    int k;
    cin>>s>>k;
    cout<<digitSum(s,k)<<endl;



return 0;
}