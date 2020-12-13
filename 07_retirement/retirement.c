#include<stdlib.h>
#include<stdio.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

void print(int months, double balance) {
  printf("Age %3d month %2d you have $%.2lf\n", (months/12),(months%12) , balance);
}

double balance_calc(double balance, retire_info retireP){
  balance += balance * retireP.rate_of_return;
  balance += retireP.contribution;
  return balance;
}


void retirement (int startAge, //in months
		 double initial, //initial saving in dollars
		 retire_info working, //info about working
		 retire_info retired){ //info about being retired

  double balance = initial;
  int total_months = startAge - 1;

  for (int i = 0; i < working.months; i++) {
    total_months += 1;
    print(total_months, balance);
    balance = balance_calc(balance, working);
  }

  for (int j = 0; j < retired.months; j++) {
    total_months += 1;
    print(total_months, balance);
    balance = balance_calc(balance, retired);
  }
}

int main() {
  retire_info working;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045 / 12.0;

  retire_info retired;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01 / 12.0;

  retirement(327, 21345, working, retired);

  return EXIT_SUCCESS;
}
