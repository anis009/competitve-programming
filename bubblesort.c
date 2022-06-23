#include <stdio.h>
#include <stdlib.h>

void bubbleSort(double arr[], int n){

  for (int j = 0; j < n; ++j) {

    for (int i = 0; i < n - j; ++i) {

      if (arr[i] > arr[i + 1]) {

        double temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }

    }

  }
}

int main(){

  double arr[10];

  for(int i=0;i<10;i++){
  	arr[i] = (double) rand()/RAND_MAX;
  }

  bubbleSort(arr,10);

  for(int i=0;i<10;i++)printf("%lf\n",arr[i]);

	return 0;
}