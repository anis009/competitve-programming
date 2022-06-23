
#include <stdio.h>
#include<stdlib.h>

int main()
{

 int a[10];
 for(int i=0;i<10;i++){
  a[i] = rand();
 }

 //  for(int i=0;i<10;i++){
 //  printf("%d ",a[i]);
 // }
 // printf("\n");

 for(int i=0,j=9;i<(10/2);i++){

  int t = a[i];
  a[i] = a[j];
  a[j] = t;
  j--;
 }

 // for(int i=0;i<10;i++){
 //  printf("%d ",a[i]);
 // }
 // printf("\n");

}