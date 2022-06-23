
#include <stdio.h>
#include<stdlib.h>

int seqsearch(int size,int target,char arr[]){
 
 int i;
 for(i=0;i<size;i++){
   
     if(arr[i]==target)
      return i;//found, i is the index
  }
  return 0;
 }

int main()
{

  char array[10];
  for(int i=0;i<10;i++){
    char rchar = 'a' + (rand() % 26);
    array[i] = rchar;
  } 

  printf("%s",array);

  printf("%d",seqsearch(10,'a',array));

}