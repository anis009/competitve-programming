#include <bits/stdc++.h>

using namespace std;

 

int main()

{

   int testcases, a, b, c, v, maxx = 1000001;

   vector<int> arr(maxx,1);

   unordered_map<int, int> umap;

   arr[0] = 0;

   arr[1] = 0;

   

   for(int i=2; i*i<maxx; i++) {

       if(arr[i]==1) {

        for(int j = i*i;  j<maxx; j+=i)

            arr[j] = 0;

       }

   }

   

   for(int j=2; j<maxx; j++) {

       arr[j] += arr[j-1];

       if(arr[j-1] != arr[j]) {

           umap[arr[j]] = j; // u[1] = 2
           
       }

   }

   

   cin>>testcases;

   

   for(int ca = 0; ca<testcases; ca++) {

       cin>>a>>b>>c;

       v = umap[arr[a]] == a ? 1 : 0;

       bool possible = (arr[b]-arr[a]+v)>=c;

       if(possible) {

           if(umap[arr[a]]==a)

               cout<<umap[arr[a]+c-1]<<endl;

           else

            cout<<umap[arr[a]+c]<<endl;

       } else {

           cout<<-1<<endl;

       }

   }

   return 0;

}