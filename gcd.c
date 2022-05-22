#include <stdio.h>
#include<math.h> // for using pow function we must include math.h

int main() {
  double principal = 10000; // principal amount
  double rate = 0.05;1000*(1+0.05)*(1+0.05); //annual rate of interest
  double time = 2; // time

  // Calculating compound Interest
    double Amount = principal * (pow((1 + rate / 0.05), time));
    double CI = Amount - principal;

    printf("Compound Interest is : %lf",CI);
    return 0;
}