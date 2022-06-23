#include<bits/stdc++.h>
using namespace std;

int maximizeArray(int arr1[], int arr2[], int n) {
    
    vector<int>v1(100001);  
    vector<int>v2(100001);    
    vector<int>v3;    
    vector<int>v4;

    for(int i=0;i<n;i++){
      v1[arr1[i]] = i;
      v2[arr2[i]] = i;
      
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int t=0;
    for(int i=n-1,j=n-1;;){
      if(arr2[j]>arr1[i] and v2[arr2[j]]!=-1 and v1[arr1[i]]!=-1){
        int temp;
        temp =v4.size();
        if(temp>0 and v2[v4[temp-1]]<v2[arr2[j]]){
          v4.push_back(arr2[j]); 
          j--;
           t++;
        }else{
          v4.insert(v4.begin(),arr2[j]);
          j--;
           t++;
        }
      }else if(arr2[j]==arr1[i]){

        int temp;
        temp =v4.size();
        if(temp>0 and v2[v4[temp-1]]<v2[arr2[j]]){
          v4.push_back(arr2[j]); 
          v2[arr2[j]]=-1;

          j--;
          t++;
          i--;
        }else{
          v4.insert(v4.begin(),arr2[j]);
          v1[arr2[j]] =-1;
          j--;
          i--;
          t++;
        }
      }
      else if (v2[arr2[j]]!=-1 and v1[arr1[i]]!=-1){
        int temp;
        temp =v3.size();
        if(temp>0 and v1[v3[temp-1]]<v2[arr1[i]]){
          v3.push_back(arr1[i]); 
          i--;
          t++;
        }else{
         v3.insert(v3.begin(),arr1[i]);;
          i--;
           t++;
        }
      }

      if(t==n){
        break;
      }
    }

    vector<int>ans(n);

    for(int i=0;i<v4.size();i++){
      cout<<v4[i]<<" ";

    }
    for(int i=0;i<v3.size();i++){
      cout<<v3[i]<<" ";
    }

    return 0;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL); 
  cout.tie(NULL);
  int arr1[] = {6, 0, 6, 2};
  int arr2[] = {6, 1, 8, 7};
  maximizeArray(arr1,arr2,4);
  
  
	return 0;
}